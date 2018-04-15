#ifndef CONFIG_H
#define CONFIG_H

#include <QSettings>


class Config
{
public:
    Config();
    QString loadDirectory();
    void saveDirectory(QString path);

private:
    QSettings *settingsConfig;
};

#endif // CONFIG_H
