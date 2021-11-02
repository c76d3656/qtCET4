#ifndef ENGTO_H
#define ENGTO_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
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
