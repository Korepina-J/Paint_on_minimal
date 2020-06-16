#include "graphicsitem.h"
#include "QPen"
QColor GraphicsItem::color=Qt::red;

GraphicsItem::GraphicsItem() :QGraphicsLineItem ()
{

    QPen* pen=new QPen(color,10,Qt::SolidLine,Qt::RoundCap);
    setPen(*pen);

}
