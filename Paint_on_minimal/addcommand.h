#ifndef ADDCOMMAND_H
#define ADDCOMMAND_H

#include "QUndoCommand"
#include "QGraphicsScene"
#include "graphicsitem.h"

class AddCommand : public QUndoCommand
{
public:
       explicit  AddCommand (GraphicsItem* item,
                             QGraphicsScene * graphicsScene,
                             QUndoCommand * parent = nullptr);
       void undo () override;
       void redo () override;

private :
       QGraphicsScene * myGraphicsScene;
       GraphicsItem* myGraphicsItem;
};

#endif // ADDCOMMAND_H
