#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sceneforpaint.h"
#include "QHBoxLayout"
#include "panel.h"
#include "QUndoStack"
#include "addcommand.h"
#include "graphicsitem.h"
#include "deletecommand.h"
#include "color.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    SceneForPaint *scene;
    QUndoStack * history;
    Color * mycolor;


    void createActions ();

private slots:
         void deleteItem ();
         void undo();
         void redo();
         void addEllipse();
};

#endif // MAINWINDOW_H
