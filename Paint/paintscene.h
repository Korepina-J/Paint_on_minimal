#ifndef PAINTSCENE_H
#define PAINTSCENE_H


#include <QGraphicsSceneMouseEvent>
#include <QTimer>
#include <QDebug>
#include "command.h"

class paintScene :public QGraphicsScene
{

    Q_OBJECT

public:
    explicit paintScene(QObject *parent = 0);
    ~paintScene();

private:
    QPointF     previousPoint;      // Координаты предыдущей точки
    QGraphicsItemGroup *item;
    QGraphicsScene      *scene;
private:
    // Для рисования используем события мыши
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
  void deleteItem(QGraphicsItemGroup *group);

};

#endif // PAINTSCENE_H
