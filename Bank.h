#include <iostream>
#include "Account.h"
using namespace std;
class Bank{
private:
    Account tk[1000];
    int index=0;
public:
    Bank();
    int getIndex();
    void SignUp(Account );
    void MaxMoney();
    void MinusMoney();
    void printAllInfor();
};
Bank::Bank()
{
    index=0;
}
int Bank::getIndex()
{
    return index;
}
void Bank::SignUp(Account a)
{
    tk[index] = a;
    index++;
}
void Bank::MaxMoney()
{
    int j,maxMoney=INT32_MIN;
    for (int i=0; i<index; i++)
    {
        if (tk[i].getMoney() > maxMoney){
            maxMoney = tk[i].getMoney();
            j=i;
        }
    }
    tk[j].printInfor();
}
void Bank::MinusMoney()
{
    for (int i=0; i<index; i++)
    {
        if (tk[i].getMoney() < 0)
        {
            tk[i].printInfor();
        }
    }
}
void Bank::printAllInfor()
{
    for (int i=0; i<index; i++)
    {
        tk[i].printInfor();
    }
}