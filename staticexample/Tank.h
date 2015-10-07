
#ifndef TANK_H
#define TANK_H
class Tank
{
public:
    Tank(char code );
    ~Tank ();
    void fire(); //普通的成员函数
    static int getCount(); //静态的成员函数
private:
    static int s_iCount; // 静态的数据成员
    char m_cCode; // 普通的数据成员
};
#endif // TANK_H
