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
    settingsConfig = new QSettings(dir + "/cxbx_reloaded/config.ini", QSettings::IniFormat);
    qDebug() << "CONFIG CLASS: " << dir;
    qDebug() << "CONFIG CLASS: "<< this->loadDirectory();
}

QString Config::loadDirectory()
{
    return this->settingsConfig->value("CXBX_EXECUTABLE", "").toString();
}

void Config::saveDirectory(QString path)
{
    qDebug() << "CONFIG CLASS: " << path;
    this->settingsConfig->setValue("CXBX_EXECUTABLE", path);
    qDebug() << "CONFIG CLASS: " << "Done";
}
