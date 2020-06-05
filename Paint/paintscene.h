#ifndef PAINTSCENE_H
#define PAINTSCENE_H


#include <QGraphicsSceneMouseEvent>
#include <QTimer>
#include <QDebug>
#include "command.h"

class paintScene : public Command
{

    Q_OBJECT

public:
    explicit paintScene(QObject *parent = 0);
    ~paintScene();
void Execute() override;
private:
    QPointF     previousPoint;      // Координаты предыдущей точки

private:
    // Для рисования используем события мыши
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

};

#endif // PAINTSCENE_H
