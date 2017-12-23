#include "xbetablemodel.h"

XbeTableModel::XbeTableModel(QString directory)
{
    scanDirectory(directory);
}

XbeTableModel::~XbeTableModel()
{
    while(!this->xbeList.empty()) {
        delete this->xbeList.back();
        this->xbeList.pop_back();
    }
}

int XbeTableModel::rowCount(const QModelIndex &parent) const
{
    return this->xbeList.count();
}

int XbeTableModel::columnCount(const QModelIndex &parent) const
{
    return 4;
}

QVariant XbeTableModel::data(const QModelIndex &index, int role) const
{
    if(!index.isValid() || index.row() >= this->xbeList.count())
        return QVariant();

    if(role == Qt::DisplayRole) {
        Xbe *xbe = this->xbeList.at(index.row());

        switch(index.column()) {
        case 1: return QString(xbe->m_szAsciiTitle);
        case 2: return (qint32)xbe->m_Certificate.dwGameRegion;
        //case 3: return QString::asprintf("%d.%d.%d", xbe->m_LibraryVersion->wMajorVersion, xbe->m_LibraryVersion->wMinorVersion, xbe->m_LibraryVersion->wBuildVersion);
        }
    }

    return QVariant();
}

void XbeTableModel::scanDirectory(QString directory)
{
    QDirIterator it(directory, QStringList() << "*.xbe", QDir::Files,
                    QDirIterator::Subdirectories | QDirIterator::FollowSymlinks);
    Xbe *xbe = NULL;

    while(it.hasNext()) {
        QString nextFile = it.next();

        xbe = new Xbe(nextFile.toStdString().data());

        this->xbeList.append(xbe);
    }
}


QVariant XbeTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role != Qt::DisplayRole)
        return QVariant();

    if (orientation != Qt::Horizontal)
        return section + 1;

    switch(section) {
    case 0: return "Logo";
    case 1: return "Title";
    case 2: return "Region";
    case 3: return "SDK Version";
    default: return QVariant();
    }
}

Xbe *XbeTableModel::getXbe(int index)
{
    return this->xbeList.at(index);
}
