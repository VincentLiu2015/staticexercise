#include <iostream>
#include "Tank.h"
#include <stdlib.h>
using namespace std;

int main(void)
{
    cout<<Tank::getCount()<<endl;  //这样直接运行会出现结果为10因为改变s_count的值，改为10，
     Tank t1('A');  //实例化
     cout<<Tank::getCount()<<endl;  // 结果为11
     Tank *p = new Tank ('B');
     cout<<Tank::getCount()<<endl;
     Tank *q = new Tank ('C');
     cout<<q->getCount()<<endl;
     delete p;//其实就是执行析构函数
     delete q;
     cout <<Tank::getCount()<<endl; //因为我们所有的对象都已经销毁了，所以我们之只能用tank：：getcout来返回数量
    system ("pause");
    return 0;
}
