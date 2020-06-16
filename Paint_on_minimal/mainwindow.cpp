#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPushButton"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    history=new QUndoStack(this);
    ui->setupUi(this);
    scene=new SceneForPaint();
    ui->scene_view->setScene(scene);
    mycolor=new Color(this);

    createActions();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow :: createActions ()
{

    connect(scene, &SceneForPaint::mouseReleaseEvent, this, &MainWindow::addEllipse);
    connect(ui->color, &QPushButton::clicked, mycolor, &Color::onColor);
    connect (ui->undo, &QPushButton::clicked, this, &MainWindow::undo);
    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::deleteItem);
    connect(ui->redo, &QPushButton::clicked, this, &MainWindow::redo);
}

void MainWindow :: deleteItem ()
{
   if (scene -> items().isEmpty())
       return ;

   QUndoCommand * deleteCommand = new DeleteCommand (scene);
   history -> push (deleteCommand);
}
void MainWindow::undo()
{
    history->undo();
}
void MainWindow::redo()
{
    history->redo();
}
void MainWindow::addEllipse()
{
    QUndoCommand * addCommand = new AddCommand (scene->myGraphicsItem,scene);
    history -> push (addCommand);
}
