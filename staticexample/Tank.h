
#ifndef TANK_H
#define TANK_H
class Tank
{
public:
    Tank(char code );
    ~Tank ();
    void fire(); //��ͨ�ĳ�Ա����
    static int getCount(); //��̬�ĳ�Ա����
private:
    static int s_iCount; // ��̬�����ݳ�Ա
    char m_cCode; // ��ͨ�����ݳ�Ա
};
#endif // TANK_H
