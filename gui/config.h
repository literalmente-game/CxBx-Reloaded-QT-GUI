#ifndef CONFIG_H
#define CONFIG_H

#include <QSettings>


class Config : public QObject
{
    Q_OBJECT

public:
    Config();
    QString loadDirectory();
    void saveDirectory(QString path);

private:
    QSettings *settingsConfig;
};

#endif // CONFIG_H
