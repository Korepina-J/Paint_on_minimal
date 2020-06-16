#ifndef DIAGRAMITEM_H
#define DIAGRAMITEM_H

#include "QGraphicsLineItem"
#include "color.h"

class GraphicsItem: public QGraphicsLineItem
{
public:
    GraphicsItem();
public:
    static QColor color;
};
#endif // DIAGRAMITEM_H
