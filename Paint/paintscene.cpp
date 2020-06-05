#include "paintscene.h"
#include "historycommand.h"
HistoryCommand* HistoryCommand ::_self = 0;
paintScene::paintScene(QObject *parent) :QGraphicsScene(parent)
{

}

paintScene::~paintScene()
{

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

   item=new QGraphicsItemGroup();

    // Отрисовываем линии с использованием предыдущей координаты

   addLine(previousPoint.x(),
            previousPoint.y(),
            event->scenePos().x(),
            event->scenePos().y(),
            QPen(Qt::red,10,Qt::SolidLine,Qt::RoundCap));
   item->addToGroup(
               addLine(previousPoint.x(),
                        previousPoint.y(),
                        event->scenePos().x(),
                        event->scenePos().y(),
                        QPen(Qt::red,10,Qt::SolidLine,Qt::RoundCap)));

    // Обновляем данные о предыдущей координате
    previousPoint = event->scenePos();
        HistoryCommand* h= HistoryCommand::Instance();
         h->push(item);
}
void paintScene::deleteItem(QGraphicsItemGroup *group)
{
    destroyItemGroup(group);
}
