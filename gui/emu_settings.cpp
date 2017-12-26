#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>

#include "emu_settings.h"
#include "ui_emu_settings.h"
#include "directory.h"

Emu_Settings::Emu_Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Emu_Settings)
{
    ui->setupUi(this);
}

Emu_Settings::~Emu_Settings()
{
    delete ui;
}


/*Methods*/
/*Load the Dialog to search cxbx's path*/
void Emu_Settings::on_btnSearch_Cxbx_clicked()
{
    /*Select the .exe of Cxbx Reloaded*/
    QString directory = QFileDialog::getOpenFileName(this, tr("Directory Cxbx-Reloaded"), nullptr, tr("*.*"));
    dir->setDirCxbx(directory);

    /*Put the path directory in the LineEdit.*/
    this->ui->edtCxbx->setText(dir->getDirCxbx());
}

/*Search the path of roms*/
void Emu_Settings::on_btnSearch_Roms_clicked()
{
    QString directory = QFileDialog::getExistingDirectory(this, tr("Select the rom dir"), nullptr, QFileDialog::ShowDirsOnly);
    dir->setDirRom(directory);
    this->ui->edtRoms->setText(dir->getDirRom());
}


/*Save Config in a file. Key, Value*/
void Emu_Settings::on_buttonBox_accepted()
{
    qDebug() << "CXBX-RELOADED: " + dir->getDirCxbx();
    qDebug() << "ROM DIR: " + dir->getDirRom();



    /*Close the emu_settings.ui dialog*/
    this->close();
}

void Emu_Settings::on_buttonBox_rejected()
{
    this->close();
}


