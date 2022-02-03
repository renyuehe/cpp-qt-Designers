#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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
    void on_buttondeadloop_clicked();

private:
    Ui::Widget *ui;

    void Delay(unsigned int msec);

};

#endif // WIDGET_H
