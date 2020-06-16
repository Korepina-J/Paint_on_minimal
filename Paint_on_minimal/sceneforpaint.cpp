#include "sceneforpaint.h"

SceneForPaint::SceneForPaint(QObject* parent) : QGraphicsScene (parent)
{


}
void SceneForPaint::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    myGraphicsItem->setLine(previousPoint.x(),
                 previousPoint.y(),
                 event->scenePos().x(),
                 event->scenePos().y());

}
void SceneForPaint::mousePressEvent(QGraphicsSceneMouseEvent * event)
{
     myGraphicsItem=new GraphicsItem();
     myGraphicsItem->setLine(
                 event->scenePos().x()-10,
                 event->scenePos().y()-10,
                  event->scenePos().x(),
                  event->scenePos().y());
     previousPoint = event->scenePos();


}
