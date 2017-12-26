#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <QString>

/*This is a temporary class*/
class Directory
{
public:
    Directory();
    Directory(QString dirCxbx);

    void setDirCxbx(QString dirCxbx);
    QString getDirCxbx();
    void setDirRom(QString dirRom);
    QString getDirRom();

private:
    QString dirCxbx;
    QString dirRom;
};

#endif // DIRECTORY_H
