#include "paintscene.h"
#include "historycommand.h"
paintScene::paintScene(QObject *parent) :Command(parent)
{

}

paintScene::~paintScene()
{

}
void paintScene::Execute() {


}
void paintScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    // При нажатии кнопки мыши отрисовываем эллипс
    addEllipse(event->scenePos().x() - 5,
               event->scenePos().y() - 5,
               10,
               10,
               QPen(Qt::NoPen),
               QBrush(Qt::red));
    // Сохраняем координаты точки нажатия
    previousPoint = event->scenePos();

}

void paintScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{

    // Отрисовываем линии с использованием предыдущей координаты
    addLine(previousPoint.x(),
            previousPoint.y(),
            event->scenePos().x(),
            event->scenePos().y(),
            QPen(Qt::red,10,Qt::SolidLine,Qt::RoundCap));
    // Обновляем данные о предыдущей координате
    previousPoint = event->scenePos();
    HistoryCommand::push(QGraphicsLineItem(previousPoint.x(),
                                            previousPoint.y(),
                                            event->scenePos().x(),
                                            event->scenePos().y()));
}
