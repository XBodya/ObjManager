#ifndef READER_H
#define READER_H

#include <QVector>
#include <QString>
#include <qobject.h>
#include "basetypes.h"

class Reader
{
public:
    Reader();
};

namespace ObjReadingTools
{
bool read(QString filename, ObjData &objData, QString &errorMsg);
}

#endif // READER_H
