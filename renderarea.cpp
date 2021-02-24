#include "renderarea.h"
#include <QPainter>
#include <QPaintEvent>

RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    mBackgroundColor(0,0,255),
    mShapeColor(255,255,255),
    mShape(Astroid)
{
    //this->setStyleSheet("background-color:blue;");
}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(100,100);
}
QSize RenderArea::sizeHint() const
{
    return QSize(400,200);
}
void RenderArea::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);
          // setting the line color

    switch(mShape){
    case Astroid:
        mBackgroundColor = Qt::red;
        break;

    case Cycloid:
        mBackgroundColor = Qt::green;
        break;

    case HuygensCycloid:
        mBackgroundColor = Qt::blue;
        break;

    case HypoCycloid:
        mBackgroundColor = Qt::yellow;
        break;

    default:
        break;
    }

    painter.setBrush(mBackgroundColor);
    painter.setPen(mShapeColor);
    //drawing area
    painter.drawRect(this->rect());
    painter.drawLine(this->rect().topLeft(), this->rect().bottomRight());
}
