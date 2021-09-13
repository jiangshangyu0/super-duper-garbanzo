/************************************************************************
* 版权所有 (C) 猫猫头一号    Email:  1094121515@qq.com
* 
* 文件名称： SgfParamManager.h
* 内容摘要： 平台内核-参数管理类头文件
* 其它说明： 无
* 当前版本： 0.1

************************************************************************/
#ifndef SWFPARAMMANAGER_H
#define SWFPARAMMANAGER_H

#include <map>
#include <string>
using namespace std;

class SgfParamManager
{
public:
    /** brief 单例模式.  */
    static SgfParamManager* GetInstance();

    /** @brief  添加参数函数.
    *
    *  @details   添加参数函数.
    *  @param   tKey  参数名称.
    *  @param   paramValue  参数值指针.
    *  @return  void.
    */
    void addParam(const string &tKey, void *paramValue);


    /** @brief  获取参数值指针函数.
    *
    *  @details   获取参数值指针函数.
    *  @param   tKey  参数名称.
    *  @return  void * 参数值指针.
    */
    void* getParamValue(const string &tKey);
};


#endif // SWFPARAMMANAGER_H
