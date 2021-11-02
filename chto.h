#ifndef CHTO_H
#define CHTO_H

#include <QPushButton>
#include <QObject>
#include <QLabel>
#include <QMainWindow>
#include "front.h"
class chTo : public QMainWindow
{
    Q_OBJECT
public:
    explicit chTo(QWidget *parent = nullptr);
private:
    QPushButton *button;
signals:
    void isClicked();
};

#endif // CHTO_H
