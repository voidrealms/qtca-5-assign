#ifndef WIDGET_H
#define WIDGET_H

#include <QObject>
#include <QDebug>
#include <QTest>
#include <QRandomGenerator>

class Widget : public QObject
{
    Q_OBJECT
public:
    explicit Widget(QObject *parent = nullptr);

signals:

public slots:
    void doMath(int max);

private slots:
    void testMath();

};

#endif // WIDGET_H
