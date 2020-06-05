#ifndef HISTORYCOMMAND_H
#define HISTORYCOMMAND_H
#include "stack"
#include "command.h"
#include "QGraphicsItem"

class HistoryCommand{
private:
    static std::stack<QGraphicsItem> history;
public:
//HistoryCommand(){}
  // template<typename Item>

   static bool push(QGraphicsItem current_command){
       history.push(current_command);
       return true;
   }


    template<typename Item>
    static QGraphicsItem* pop(){

            if(!history.empty()) {
                QGraphicsItem* undo_object = new Item(history.top());

                history.pop();
                return undo_object;
                }
            else return NULL;
    }

};

#endif // HISTORYCOMMAND_H
