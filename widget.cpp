#include "widget.h"

Widget::Widget(QObject *parent) : QObject(parent)
{

}

void Widget::doMath(int max)
{
    for (int i = 0;i < max;i++)
    {
        int h = max * i;
    }
}

void Widget::testMath()
{
    QBENCHMARK
    {
        int value = QRandomGenerator::global()->bounded(1000);
        this->doMath(value);
    }
}


