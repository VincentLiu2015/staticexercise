
#include <iostream>
#include "Tank.h"
using namespace std;
int Tank::s_iCount=10; //���ȳ�ʼ����̬�����ݳ�Ա���ڹ��캯������߽���
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
int Tank::getCount() //��̬�Ķ��岻Ҫ��static�����Ҫע��
{
    // fire();
    //m_cCode='C';
     //�����ǷǷ�����
    return s_iCount;
}
