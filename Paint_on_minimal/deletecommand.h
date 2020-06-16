#ifndef DELETECOMMAND_H
#define DELETECOMMAND_H
#include "QUndoCommand"
#include "QGraphicsScene"
#include "QList"
#include "graphicsitem.h"

class DeleteCommand: public QUndoCommand
{
public :
    explicit DeleteCommand ( QGraphicsScene * graphicsScene , QUndoCommand * parent = nullptr);

         void undo () override;
         void redo () override;
private :
         QGraphicsScene * myGraphicsScene;
         QList < QGraphicsItem * > list ;
};

#endif // DELETECOMMAND_H
