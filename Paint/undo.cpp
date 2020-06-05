#include "undo.h"

Undo::Undo(QWidget *parent):Command(parent)
{

}

void Undo::Execute()
{
   removeItem ( HistoryCommand::pop);
}
