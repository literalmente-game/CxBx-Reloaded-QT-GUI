#include "emu_settings.h"
#include "ui_emu_settings.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QStandardPaths>
#include <QDebug>

Emu_Settings::Emu_Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Emu_Settings)
{
    ui->setupUi(this);

    this->ui->edtCxbx->setText(configClass.loadDirectory()[0]);
    this->ui->edtRoms->setText(configClass.loadDirectory()[1]);
}

Emu_Settings::~Emu_Settings()
{
    delete ui;
}

/*CXBX Search Button: Load the Dialog to search cxbx's path*/
void Emu_Settings::on_btnSearch_Cxbx_clicked()
{
    /*Select .exe of Cxbx Reloaded*/
    QString qlineDirCxbx = this->ui->edtCxbx->text().trimmed();
    QString directory = QFileDialog::getOpenFileName(this, tr("Select the Cxbx-Reloaded executable file"), "", tr("cxbx.exe"));

    /*Verify if directory var is empty, and put the directory path in variable "qlineDirCxbx" into "directory" variable.*/
    if(directory.isEmpty())
        directory = qlineDirCxbx;

    /*Put directory path in the LineEdit.*/
    this->ui->edtCxbx->setText(directory);
}

void Emu_Settings::on_btnSearch_Roms_clicked()
{
    QString qlDirRoms = this->ui->edtRoms->text().trimmed();
    QString directory = QFileDialog::getExistingDirectory(this, tr("Select roms directory"), "", QFileDialog::ShowDirsOnly);
    qDebug() << directory;

    if(directory.isEmpty())
        directory = qlDirRoms;

    this->ui->edtRoms->setText(directory);
}

/*Save Config in a ini file. Key, Value*/
void Emu_Settings::on_buttonBox_accepted()
{
    /*Check QLineEdit is filled*/
    if(!ui->edtCxbx->text().isEmpty()){
        QString cxbxPath = this->ui->edtCxbx->text().trimmed();
        QString romsPath = this->ui->edtRoms->text().trimmed();
        configClass.saveDirectory(cxbxPath, romsPath);
        configClass.saveEmulation();
    }

    /*Close emu_settings.ui dialog*/
    this->close();
}

void Emu_Settings::on_buttonBox_rejected()
{
    this->close();
}
