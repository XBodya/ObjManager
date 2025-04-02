#ifndef BASETYPES_H
#define BASETYPES_H

#include <QVector>
#include <qobject.h>

#define VERTEX_KEY "v"
#define TEXTURE_COORDS_KEY "vt"
#define NORMAL_KEY "vp"
#define FACE_KEY "f"
#define GROUP_KEY "g"
#define OBJECT_KEY "o"

class ObjData
{
public:
    ObjData();
    QVector<QVector3D> m_vertices;
    QVector<QVector2D> m_texCoords;
    QVector<QVector3D> m_normals;

    QVector<int> m_polygonVertexIndices;
    QVector<int> m_polygonTexCoordIndices;
    QVector<int> m_polygonNormalIndices;

    QVector<int> m_startVertexIndices;
    QVector<int> m_startTexCoordIndices;
    QVector<int> m_startNormalIndices;

};

#endif // BASETYPES_H
