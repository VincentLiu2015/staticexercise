#include <iostream>
#include "Tank.h"
#include <stdlib.h>
using namespace std;

int main(void)
{
    cout<<Tank::getCount()<<endl;  //����ֱ�����л���ֽ��Ϊ10��Ϊ�ı�s_count��ֵ����Ϊ10��
     Tank t1('A');  //ʵ����
     cout<<Tank::getCount()<<endl;  // ���Ϊ11
     Tank *p = new Tank ('B');
     cout<<Tank::getCount()<<endl;
     Tank *q = new Tank ('C');
     cout<<q->getCount()<<endl;
     delete p;//��ʵ����ִ����������
     delete q;
     cout <<Tank::getCount()<<endl; //��Ϊ�������еĶ����Ѿ������ˣ���������ֻ֮����tank����getcout����������
    system ("pause");
    return 0;
}
