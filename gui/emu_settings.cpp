#include <QMessageBox>
#include <QFileDialog>
#include <QStandardPaths>
#include <QDebug>

#include "emu_settings.h"
#include "ui_emu_settings.h"

Emu_Settings::Emu_Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Emu_Settings)
{
    ui->setupUi(this);

    /*
       QStandardPaths::writableLocation: Prepare a location to write a file.
       QStandardPaths::GenericDataLocation: Where the file will be written(AppData/Local).
     */
    QString dir = QStandardPaths::writableLocation(QStandardPaths::GenericDataLocation);
    qDebug() << "UI EMU_SETTINGS: " << dir;

    directory = new QSettings(dir + "/cxbx-reloaded/dir.ini", QSettings::IniFormat);
    ui->edtCxbx->setText(this->loadDir());
}

Emu_Settings::~Emu_Settings()
{
    delete ui;
}


/*CXBX Search Button: Load the Dialog to search cxbx's path*/
void Emu_Settings::on_btnSearch_Cxbx_clicked()
{
    /*Select the .exe of Cxbx Reloaded*/
    QString directory = QFileDialog::getOpenFileName(this, tr("Select the Cxbx-Reloaded executable file"), "", tr("cxbx.exe"));

    /*Put the path directory in the LineEdit.*/
    this->ui->edtCxbx->setText(directory);
}

/*Search the path of roms. Maybe will be removed.*/
void Emu_Settings::on_btnSearch_Roms_clicked()
{
    /*QString directory = QFileDialog::getExistingDirectory(this, tr("Select the rom dir"), nullptr, QFileDialog::ShowDirsOnly);
    dir->setDirRom(directory);
    this->ui->edtRoms->setText(dir->getDirRom());*/
}


/*Save Config in a ini file. Key, Value*/
void Emu_Settings::on_buttonBox_accepted()
{
    /*Check if the QLineEdit is filled*/
    if(!ui->edtCxbx->text().isEmpty()){
        QList<QString> listDir;
        listDir.append(ui->edtCxbx->text());
        this->saveDir(listDir);
    }

    /*Close the emu_settings.ui dialog*/
    this->close();
}

void Emu_Settings::on_buttonBox_rejected()
{
    this->close();
}

void Emu_Settings::saveDir(QList<QString> list)
{
    this->directory->setValue("cxbx", list.at(0));
    /*this->directory->setValue("roms", list.at(1));*/
}

QString Emu_Settings::loadDir()
{
    QString cxbxDir = this->directory->value("cxbx", "").toString();
    qDebug() << "LoadDir(): " << cxbxDir;
    return cxbxDir;
}


