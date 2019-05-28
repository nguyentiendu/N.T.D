#pragma once
#include <iostream>
using namespace std;
class InforHangHoa
{
private:
	string name;
	int ID;
	int soluong;
	double don_gia;
public:
	InforHangHoa();
	InforHangHoa(string, int, double);
	int getID()const;
	static int counter;
	void Print()const;
};
int InforHangHoa::counter=1;
InforHangHoa::InforHangHoa(){}
InforHangHoa::InforHangHoa(string name, int soluong, double don_gia)
{
	this->name=name;
	soluong=soluong;
	don_gia=don_gia;
	this->ID = counter;
	counter++;
}
int InforHangHoa::getID()const
{
	return this->ID;
}
void InforHangHoa::Print()const
{
	cout<<this->ID<<" "<<this->name<<endl;
}