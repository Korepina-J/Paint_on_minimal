#include "undo.h"

Undo::Undo(QWidget *parent):Command(parent)
{

}

void Undo::Execute()
{
  QGraphicsItemGroup *hee= new QGraphicsItemGroup;
HistoryCommand* h=HistoryCommand::Instance();
hee=h->pop();

}
