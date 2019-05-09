#include <iostream>
#include <iomanip>
using namespace std;
void menu()
{
    cout<<setw(5)<<left<<"1."<<setw(30)<<left<<"Sign Up"<<endl;
    cout<<setw(5)<<left<<"2."<<setw(30)<<left<<"Print all Account"<<endl;
    cout<<setw(5)<<left<<"3."<<setw(30)<<left<<"Print Account has max money"<<endl;
    cout<<setw(5)<<left<<"4."<<setw(30)<<left<<"Print all Account has minus money"<<endl;
    cout<<setw(5)<<left<<"0."<<setw(30)<<left<<"Exit"<<endl;
    cout<<"Moi ban chon chuc nang: ";
}