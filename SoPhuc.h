#include <iostream>
using namespace std;
class SP
{
protected:
    double phanthuc;
    double phanao;
    double somu;
public:
    SP();
    SP(double, double, double);
    SP operator+ (const SP &)const;
    SP operator- (const SP &)const;
    SP operator* (const SP &)const;
    SP operator/ (const SP &)const;
    //SP operator^ (const SP &)const;
    SP tinhsomu (const SP &)const;
    void print()const;
};
SP::SP():phanthuc(0),phanao(0),somu(0){}
SP::SP(double a, double b, double c):phanthuc(a),phanao(b),somu(c){}
SP SP::operator+ (const SP &a)const
{
    SP kq;
    kq.phanthuc = phanthuc + a.phanthuc;
    kq.phanao = phanao + a.phanao;
    return kq;
}
SP SP::operator- (const SP &a)const
{
    SP kq;
    kq.phanthuc = phanthuc - a.phanthuc;
    kq.phanao = phanao - a.phanao;
    return kq;
}
SP SP::operator* (const SP &a)const
{
    SP kq;
    kq.phanthuc = phanthuc * a.phanthuc - phanao * a.phanao;
    kq.phanao = phanthuc * a.phanao + phanao * a.phanthuc;
    return kq;
}
//SP SP::operator/ (const SP &a)const
//{}
SP SP::tinhsomu(const SP &a)const
{
    SP kq;
    while(a.somu!=1)
    {
        kq = a*a;
        a.somu--;
    }
    return kq;
}
void SP::print()const
{
    if (phanthuc==0 && phanao==0)    cout<<0<<endl;
    else if (phanthuc==0 )   cout<<phanao<<"i"<<endl;
    else if (phanao==0) cout<<phanthuc<<endl;
    else    cout<<phanthuc<<" + "<<phanao<<"i"<<endl;
}