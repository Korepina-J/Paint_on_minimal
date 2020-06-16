#include "color.h"
#include "QColorDialog"
#include "graphicsitem.h"

Color::Color(QWidget *parent) : QWidget(parent)
{

}
  void Color::onColor()
  {
    colorOfBrush = QColorDialog::getColor(Qt::yellow );
    if( colorOfBrush.isValid() )
    {
        GraphicsItem::color=colorOfBrush;
    }
  }
