#ifndef CONFIG_H
#define CONFIG_H

#include <QSettings>
#include <QStringList>


class Config
{
public:
    Config();
    QStringList loadDirectory();
    void saveDirectory(QString cxbxPath, QString romsPath);
    void saveEmulation();

private:
    QSettings *settingsConfig;
};

#endif // CONFIG_H
