#ifndef COLOR_H
#define COLOR_H

#include <QWidget>

class Color : public QWidget
{
    Q_OBJECT
public:
    explicit Color(QWidget *parent = nullptr);
public slots:
    void onColor();
public:
    QColor colorOfBrush;

};

#endif // COLOR_H
