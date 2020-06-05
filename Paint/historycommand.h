#ifndef HISTORYCOMMAND_H
#define HISTORYCOMMAND_H
#include "stack"
#include "command.h"
#include "QGraphicsItem"

class HistoryCommand{
private:
     std::stack<QGraphicsItemGroup*> history;
     static HistoryCommand* _self;
private:
     HistoryCommand(){}

public:
     static HistoryCommand* Instance()
           {
         if(!_self)
                 {
                     _self = new HistoryCommand();
                 }
                 return _self;
           }


    void push(QGraphicsItemGroup *current_command);
    QGraphicsItemGroup* pop();
};

#endif // HISTORYCOMMAND_H
