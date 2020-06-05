#ifndef COMMAND_H
#define COMMAND_H
#include "QWidget"
#include <QGraphicsScene>
class Command : public QGraphicsScene
{
protected:
        QObject *parent;
    public:
        Command(QObject *parent);
         ~Command();
        virtual void Execute()=0;

};

#endif // COMMAND_H
