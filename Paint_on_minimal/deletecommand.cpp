#include "deletecommand.h"

DeleteCommand :: DeleteCommand ( QGraphicsScene * scene , QUndoCommand * parent)
   : QUndoCommand (parent) , myGraphicsScene (scene)
{
    list = myGraphicsScene -> items ();

}
void DeleteCommand :: undo ()
{
    foreach(QGraphicsItem* item,list)
    {
       myGraphicsScene -> addItem (item);
       myGraphicsScene -> update ();
    }
}
void DeleteCommand :: redo ()
{
    foreach(QGraphicsItem* item,list)
    {
     myGraphicsScene -> removeItem (item);
    }

}
