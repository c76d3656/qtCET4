#ifndef ENGTO_H
#define ENGTO_H

#include <QPushButton>
#include <QObject>
#include <QLabel>
#include <QMainWindow>
#include "front.h"
class engTo : public QMainWindow
{
    Q_OBJECT
public:
    explicit engTo(QWidget *parent = nullptr);
private:
    QPushButton *button;
signals:
    void isClicked();
};

#endif // ENGTO_H
