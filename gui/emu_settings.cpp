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

    this->ui->edtCxbx->setText(configClass.loadDirectory().trimmed());
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

/*Search path of roms. Maybe will be removed.*/
void Emu_Settings::on_btnSearch_Roms_clicked()
{
    /*QString directory = QFileDialog::getExistingDirectory(this, tr("Select the rom dir"), nullptr, QFileDialog::ShowDirsOnly);
    dir->setDirRom(directory);
    this->ui->edtRoms->setText(dir->getDirRom());*/
}

/*Save Config in a ini file. Key, Value*/
void Emu_Settings::on_buttonBox_accepted()
{
    /*Check QLineEdit is filled*/
    if(!ui->edtCxbx->text().isEmpty()){
        configClass.saveDirectory(this->ui->edtCxbx->text().trimmed());
    }

    /*Close emu_settings.ui dialog*/
    this->close();
}

void Emu_Settings::on_buttonBox_rejected()
{
    this->close();
}
