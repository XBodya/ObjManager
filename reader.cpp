#include "reader.h"

#include <QFile>
#include <QTextStream>

bool ObjReadingTools::read(QString filename, ObjData &objData, QString &errorMsg)
{
    QFile file(filename);
    file.open(QFile::ReadOnly);
    QTextStream stream(&file);
    while(!stream.atEnd()){
        QString line = stream.readLine();

        //parse line on token and body
        int firstSpaceInd = line.index(' ');


    }
    return true;
}
