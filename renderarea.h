#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QColor>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);

    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;
    enum ShapeType {Astroid, Cycloid, HuygensCycloid, HypoCycloid};

    void setBackgroundColor(QColor color){mBackgroundColor = color;} //setter
    QColor backgroundColor()const {return mBackgroundColor;} //getter
    // 'const' qualifier added so that the function doesn't modify any member class variable
    void setShape (ShapeType shape){mShape = shape;}  //setter
    ShapeType shape() const {return mShape;}     //getter



protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

signals:

public slots:

private:
    QColor mBackgroundColor;
    QColor mShapeColor;
    ShapeType mShape;
};

#endif // RENDERAREA_H
