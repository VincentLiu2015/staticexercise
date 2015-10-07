
#include <iostream>
#include "Tank.h"
using namespace std;
int Tank::s_iCount=10; //首先初始化静态的数据成员，在构造函数的外边进行
Tank::Tank(char  code )
{
 m_cCode=code ;
 s_iCount++;
 cout <<"TANK"<<endl;
}
Tank::~Tank()
{
    s_iCount--;
    cout <<"~Tank"<<endl;
}
void Tank::fire()
{   getCount();
    cout<<"tank--fire"<<endl;
}
int Tank::getCount() //静态的定义不要加static，这个要注意
{
    // fire();
    //m_cCode='C';
     //这样是非法调用
    return s_iCount;
}
