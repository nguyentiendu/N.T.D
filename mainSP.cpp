#include <iostream>
#include "SoPhuc.h"
using namespace std;
int main()
{
    SP a(-1,10,2);
    SP b(1,10,3);
    //SP kq1=a+b;
    //kq1.print();
    //SP kq2=a-b;
    //kq2.print();
    //SP kq3=a*b;
    //kq3.print();
    SP kq=a*a;
    kq.print();
    SP kq1=a.tinhsomu(a);
    kq.print();
    return 0;
}