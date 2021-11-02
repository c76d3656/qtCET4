#ifndef CHTO_H
#define CHTO_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
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
