#ifndef UNDO_H
#define UNDO_H
#include "command.h"
#include "historycommand.h"
class Undo : public Command
{
public:
    Undo(QWidget *parent);
    void Execute() override;
    //~Undo();
};

#endif // UNDO_H
