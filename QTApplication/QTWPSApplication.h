#ifndef QTWPSAPPLICAITON_H
#define QTWPSAPPLICAITON_H

#include <QtWidgets/QMainWindow>
#include "ui_QTWPSApplication.h"


class QTWPSApplication : public QMainWindow
{
    Q_OBJECT

public:
    QTWPSApplication(QWidget* parent = Q_NULLPTR);

private:
    Ui::QTApplicationClass ui;
};







#endif // !QTWPSAPPLICAITON
