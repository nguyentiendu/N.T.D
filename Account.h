#include <iostream>
#include <string>
using namespace std;
class Account{
private:
    string numberacc;
    string fullname;
    string password;
    long long int  money;
    Account *dstk[1000];
    int soluongtk=0;
public:
    Account();
    Account(string, string, string, long long int);
    void setName(string);
    void setNumAcc(string);
    void setPass(string);
    void setMoney(long long int);
    string getName()const;
    string getNumAcc()const;
    string getPass()const;
    long long int getMoney()const;
    Account SignUp(string, string, string, long long int);
    void SummationMoney(const long long int &);
    void SubtractionMoney(const long long int &);
    void printInfor()const;
};
Account::Account()
{
    this->numberacc="";
    this->fullname="";
    this->password="";
    this->money=0;
}
Account::Account(string num, string name, string pass, long long int money)
{
    this->numberacc=num;
    this->fullname=name;
    this->password=pass;
    this->money=money;
}
void Account::setName(string name)
{
    this->fullname=name;
}
void Account::setNumAcc(string num)
{
    this->numberacc=num;
}
void Account::setPass(string pass)
{
    this->password=pass;
}
void Account::setMoney(long long int money)
{
    this->money=money;
}
string Account::getNumAcc()const
{
    return this->numberacc;
}
string Account::getName()const
{
    return this->fullname;
}
string Account::getPass()const
{
    return this->password;
}
long long int Account::getMoney()const
{
    return this->money;
}
Account Account::SignUp(string num, string name, string pass, long long int money)
{
    if (this->soluongtk <1000)
        dstk[this->soluongtk++] = new Account(num, name, pass, money);
}
void Account::SummationMoney(const long long int &a)
{
    if (a>0)
        this->money += a;
}
void Account::SubtractionMoney(const long long int &a)
{
    if (a>0 && a<=this->money)
        this->money -= a;
}
void Account::printInfor()const
{
    for (int i=0; i<this->soluongtk; i++)
    {
        cout<<dstk[i]->numberacc<<endl;
        cout<<dstk[i]->fullname<<endl;
        cout<<dstk[i]->password<<endl;
        cout<<dstk[i]->money<<endl;
    }
}