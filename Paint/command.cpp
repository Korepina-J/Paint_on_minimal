#include "command.h"

Command::Command(QObject *parentW)
{
    this->parent=parentW;
}
Command::~Command()
{
    delete parent;
}
