#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QEventLoop>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

protected:
    void mousePressEvent(QMouseEvent *event);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;

};

#endif // WIDGET_H
