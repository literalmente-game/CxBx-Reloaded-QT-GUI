#ifndef XBEITEMMODEL_H
#define XBEITEMMODEL_H

#include <QList>

#include <QString>
#include <QAbstractItemModel>

#include <QDirIterator>

#include "Common/Xbe.h"

class XbeTableModel : public QAbstractTableModel
{
public:
    XbeTableModel(QString directory);
    ~XbeTableModel();

    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;

    Xbe *getXbe(int index);

private:
    QList<Xbe*> xbeList;

    void scanDirectory(QString directory);
};

#endif // XBEITEMMODEL_H
