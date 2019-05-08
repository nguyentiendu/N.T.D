#include <iostream>
#include "Account.h"
using namespace std;
int main()
{
    //Account a("12345","Nguyen Tien Du","20082000",12000000);
    //long long int b=6000000;
    //a.SubtractionMoney(b);
    //a.printInfor();
    Account c;
    string num,name,pass;
    long long int money;
    //cin>>num>>name>>pass>>money;
    cin>>num;
    getline(cin,name);
    cin>>pass;
    cin>>money;
    c.SignUp(num,name,pass,money);
    c.printInfor();
    return 0;
}