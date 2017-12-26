#include "directory.h"

Directory::Directory()
{

}

Directory::Directory(QString dirCxbx)
{
    this->setDirCxbx(dirCxbx);
}

void Directory::setDirCxbx(QString dirCxbx)
{
    this->dirCxbx = dirCxbx;
}

QString Directory::getDirCxbx()
{
    return this->dirCxbx;
}

void Directory::setDirRom(QString dirRom)
{
    this->dirRom = dirRom;
}

QString Directory::getDirRom()
{
    return this->dirRom;
}
