#include "config.h"
#include <QDebug>
#include <QStandardPaths>

Config::Config()
{
    /*
       QStandardPaths::writableLocation: Prepare a location to write a file.
       QStandardPaths::GenericDataLocation: Where the file will be written(AppData/Local).
     */
    QString dir = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);
    settingsConfig = new QSettings(dir + "/CXBX-Reloaded/config.ini", QSettings::IniFormat);
}

QStringList Config::loadDirectory()
{
    this->settingsConfig->beginGroup("Directories");

    QString dir = this->settingsConfig->value("CXBX_EXE", "").toString();
    QString rom = this->settingsConfig->value("ROMS", "").toString();

    QStringList listDir;
    listDir.append(dir);
    listDir.append(rom);

    this->settingsConfig->endGroup();

    return listDir;
}

void Config::saveDirectory(QString cxbxPath, QString romsPath)
{
    qDebug() << "CONFIG CLASS, METHOD SAVEDIRECTORY: " << cxbxPath;
    qDebug() << "CONFIG CLASS, METHOD SAVEDIRECTORY: " << romsPath;
    this->settingsConfig->beginGroup("Directories");

    this->settingsConfig->setValue("CXBX_EXE", cxbxPath);
    this->settingsConfig->setValue("ROMS", romsPath);

    this->settingsConfig->endGroup();
}

void Config::saveEmulation()
{
    this->settingsConfig->beginGroup("Emulation");
    this->settingsConfig->setValue("LLE_JIT", false);
    this->settingsConfig->setValue("LLE_APU", false);
    this->settingsConfig->setValue("LLE_GPU", false);
    this->settingsConfig->endGroup();
}
