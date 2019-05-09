#include <iostream>
#include "Bank.h"
#include "menuBank.h"
using namespace std;
int main()
{
    Bank a;
    int choose;
    menu();
    cin>>choose;
    while (choose!=0)
    {
        if (choose==1)
        {
            string name, num, pass;
            long long int money;
            cout<<"Nhap so tai khoan: ";
            cin>>num;
            cout<<"Nhap Ho va Ten: ";
            cin.ignore();
            getline(cin,name);
            cout<<"Nhap mat khau: ";
            cin>>pass;
            cout<<"Nhap so tien: ";
            cin>>money;
            Account b;
            b.SignUp(num,name,pass,money);
            a.SignUp(b);
            menu();
            cin>>choose;
        }
        if (choose==2)
        {
            a.printAllInfor();
            menu();
            cin>>choose;
        }
        if (choose==3)
        {
            a.MaxMoney();
            menu();
            cin>>choose;
        }
        if (choose==4)
        {
            a.MinusMoney();
            menu();
            cin>>choose;
        }
    }

    return 0;
}