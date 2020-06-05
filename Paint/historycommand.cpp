#include "historycommand.h"

void HistoryCommand::push(QGraphicsItemGroup *current_command){
history.push(current_command);

}
QGraphicsItemGroup* HistoryCommand::pop(){

        if(!history.empty()) {
            QGraphicsItemGroup* undo_object = new QGraphicsItemGroup(history.top());

            history.pop();
            return undo_object;
            }
        else return NULL;
}
