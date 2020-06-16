#ifndef SCENEFORPAINT_H
#define SCENEFORPAINT_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include "graphicsitem.h"

class SceneForPaint : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit SceneForPaint(QObject* parent=nullptr);
    GraphicsItem* myGraphicsItem;
private:
    QPointF previousPoint;
signals:
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event);
public:
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);


};

#endif // SCENEFORPAINT_H
