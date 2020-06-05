#include "command.h"

Command::Command(QObject *parentW):QGraphicsScene(parentW)
{
    this->parent=parentW;
}
Command::~Command()
{
    delete parent;
}
