#include "addcommand.h"

AddCommand :: AddCommand (GraphicsItem* item,QGraphicsScene * scene , QUndoCommand * parent)
   : QUndoCommand (parent) , myGraphicsScene (scene), myGraphicsItem (item)
{
}
void AddCommand :: undo ()
{
   myGraphicsScene -> removeItem (myGraphicsItem);
   myGraphicsScene -> update ();
}
void AddCommand :: redo ()
{
   myGraphicsScene -> addItem (myGraphicsItem);

   myGraphicsScene -> clearSelection ();
   myGraphicsScene -> update ();
}
