#include <QDesktopServices>
#include <QUrl>
#include <QDir>
#include <QFileDialog>
#include <QMessageBox>
#include <QStandardPaths>
#include <QDebug>

#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //QString appData = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);

    //this->settings = new QSettings(appData + "/cxbx-reloaded/conf.ini", QSettings::IniFormat);

    this->gameTableView = this->findChild<QTableView*>("gameTableView");
    this->gameTableView->setModel(new XbeTableModel(configClass.loadDirectory()[1]));
    this->gameTableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
}

MainWindow::~MainWindow()
{
    delete ui;
    //delete this->settings;
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

    /*Runs Cxbx process.*/
    QString cxbxDir = configClass.loadDirectory()[0];
    QStringList arguments;
    arguments.append(QDir::toNativeSeparators(xbePath));
    this->runCxbx(cxbxDir, arguments);
}

//Open a dialog window to load an .xbe and run on the emulator
void MainWindow::on_actionOpen_Xbe_triggered()
{
    //Obtain the .xbe path
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open"),"",tr("*.xbe"));

   //Run the .xbe as an argument for the emulator if the argument isn't empty
    if (!fileName.isEmpty()){
        QString cxbxDir = configClass.loadDirectory()[0];
        qDebug() << "MAINWINDOW, configClass: " << cxbxDir;
        QStringList arguments;
        arguments.append(QDir::toNativeSeparators(fileName)); //QDir::toNativeSeparators makes sure the path obtained by QFileDialog::getOpenFileName is valid as a native path
        this->runCxbx(cxbxDir, arguments);
      }
}


//Load About window
void MainWindow::on_actionAbout_triggered()
{
    about = new About(this);
    about->setModal(true);
    about->show();
}

//Load Emulation settings window
void MainWindow::on_actionEmulation_triggered()
{
    emu = new Emu_Settings(this);
    emu->setModal(true);
    emu->show();
}

void MainWindow::on_actionEmulationStop_triggered()
{
    if(this->emulatorProcess->isOpen())
        this->emulatorProcess->terminate();
}

void MainWindow::on_actionVideo_triggered()
{
    emu = new Emu_Settings(this);
    emu->setModal(true);
    emu->show();
}

/*Runs Cxbx process.*/
void MainWindow::runCxbx(QString cxbxDir, QStringList arguments)
{
    emulatorProcess = new QProcess(this);
    this->emulatorProcess->start(cxbxDir, arguments);
}
