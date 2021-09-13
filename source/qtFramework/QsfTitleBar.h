/************************************************************************
* 版权所有 (C) 猫猫头一号    Email:  1094121514@qq.com
*
* 文件名称： QsMainWindow.h
* 内容摘要：
* 其它说明： 无
* 当前版本： 0.1

************************************************************************/

#ifndef QSF_TITLEBAR_H
#define QSF_TITLEBAR_H

#include <QtCore/QString>

#include <QWidget>
#include <QButtonGroup>
#include <QPushButton>
#include <QToolButton>
#include <QLabel>
#include <QHBoxLayout>
#include "QsfToolButton.h"
   
#include "QsfToolButton.h"

class      QsfTitleBar : public QWidget
{
    Q_OBJECT

public:
    QsfTitleBar(QWidget *parent = NULL);
    ~QsfTitleBar();

    /** @brief  设置窗口标题.
    *
    *  @details 设置窗口标题.
    *  @param   title 窗口的标题.
    *  @return  .
    */
    void setWindowTitle(QString title, Qt::Alignment tAlignment = Qt::AlignCenter);
    QString windowTitle();

    void addLeftAction(QPushButton* tAct);
    void addRightAction(QPushButton* tAct);

private:
    QLabel* m_titleLab;
    QIcon* m_icon;

    QList<QPushButton*> m_leftActions;
    QList<QPushButton*> m_rightActions;

    QHBoxLayout* m_layout, *layLeft, *layRight;

};

#endif //QSF_TITLEBAR_H