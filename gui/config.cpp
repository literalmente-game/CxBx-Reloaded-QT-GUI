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

QString Config::loadDirectory()
{
    qDebug() << "CONFIG CLASS, METHOD LOADDIRECTORY: " << "In";
    return this->settingsConfig->value("CXBX_EXE", "").toString();
}

void Config::saveDirectory(QString path)
{
    qDebug() << "CONFIG CLASS, METHOD SAVEDIRECTORY: " << path;
    this->settingsConfig->setValue("CXBX_EXE", path);
    qDebug() << "CONFIG CLASS, METHOD SAVEDIRECTORY: " << "Done";
}
