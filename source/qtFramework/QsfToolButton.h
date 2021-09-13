/************************************************************************
* 版权所有 (C) 猫猫头一号    Email:  1094121514@qq.com
*
* 文件名称： QsMainWindow.h
* 内容摘要：
* 其它说明： 无
* 当前版本： 0.1

************************************************************************/

#ifndef QSFTOOLBUTTON_H
#define QSFTOOLBUTTON_H

#include <QPushButton>
    
/************************************************************************
                  类声明:
************************************************************************/

/** @brief 自定义界面的按钮
*
*  @details 自定义界面的按钮类
*/
class      QsfToolButton: public QPushButton
{
    Q_OBJECT
public:
    enum ButtonMouseState  
    {  
        ButtonMouseDefault = 0,  
        ButtonMouseEnter,  
        ButtonMousePress,  
        ButtonMouseNone  
    }; 

public:

    QsfToolButton( QWidget * parent = 0 );
    ~QsfToolButton();

    void setIcon(QString icon, QString icon_hover, QString icon_pressed);
private:
    QIcon m_icon, m_icon_hover, m_icon_pressed;

protected:
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
};
#endif // QSFTOOLBUTTON_H