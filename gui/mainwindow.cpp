#include <QDesktopServices>
#include <QUrl>
#include <QDir>
#include <QFileDialog>
#include <QMessageBox>
#include <QStandardPaths>
#include <QDebug>

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "emu_settings.h"
#include "ui_emu_settings.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString appData = QStandardPaths::writableLocation(QStandardPaths::GenericDataLocation);

    this->settings = new QSettings(appData + "/cxbx-reloaded/conf.ini", QSettings::IniFormat);

    this->gameTableView = this->findChild<QTableView*>("gameTableView");

    this->gameTableView->setModel(new XbeTableModel(this->settings->value("game_dir").toString()));
    this->gameTableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete this->settings;
}

//Simple exit instruction
void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

//Load the CxBx-Reloaded website/Github url in the default browser
void MainWindow::on_actionGo_To_The_Official_CxBx_Reloaded_Website_triggered()
{
    QString link = "https://github.com/Cxbx-Reloaded/Cxbx-Reloaded";
    QDesktopServices::openUrl(QUrl(link));
}

//Test code to run the CxBx binary with a game as an argument, should be removed when implementing the button real funtion
void MainWindow::on_actionEmulationStart_triggered()
{
    QItemSelectionModel *selectionModel = this->gameTableView->selectionModel();
    XbeTableModel *model = dynamic_cast<XbeTableModel*>(this->gameTableView->model());

    if(!selectionModel->hasSelection())
        return;

    int index = selectionModel->selectedIndexes().at(0).row();

    QString xbePath = model->getXbe(index)->m_szPath;
    QString program = this->settings->value("cxbx_path").toString();

    this->emulatorProcess.start(program, QStringList() << xbePath);
}

//Open a dialog window to load an .xbe and run on the emulator
void MainWindow::on_actionOpen_Xbe_triggered()
{
    //Obtain the .xbe path
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open"),"",tr("*.xbe"));

   //Run the .xbe as an argument for the emulator if the argument isn't empty
    if (fileName != ""){

        QString program = "E:\\Emulators\\XBox\\Emulators\\11-30\\Cxbx.exe "; //hard coded path, should be dynamic in the future
        QStringList arguments;
        QString temp_path; // = "\"" + fileName + "\""; enquotations are not working for some reason?
        temp_path = QDir::toNativeSeparators(fileName); //QDir::toNativeSeparators makes sure the path obtained by QFileDialog::getOpenFileName is valid as a native path
        arguments << temp_path;

        QProcess *myProcess = new QProcess(qApp);
        myProcess->start(program,arguments);

      }
}


//Load the About window
void MainWindow::on_actionAbout_triggered()
{

}

//Load the Emulation settings window
void MainWindow::on_actionEmulation_triggered()
{
    Emu_Settings *emu = new Emu_Settings(this);
    emu->show();
}

void MainWindow::on_actionEmulationStop_triggered()
{
    if(this->emulatorProcess.state() == QProcess::Running)
        this->emulatorProcess.terminate();
}
