#pragma once
#include <iostream>
#include "Infor.h"
using namespace std;
class InforKhach : public Infor
{
private:
	int IDkhach;
	int diem_thuong;
	float chiet_khau;
public:
	InforKhach();
	InforKhach(string, int, string, string, string, int);
	bool setCK(int);
	int getCK()const;
	int getIDkhach()const;
	static int counter;
	void Print()const;
};
int InforKhach::counter=1;
InforKhach::InforKhach()
{}
InforKhach::InforKhach(string name, int year, string que_quan, string cmnd, string sdt, int diem_thuong)
{
	this->name = name;
	year = year;
	que_quan = que_quan;
	cmnd = cmnd;
	sdt = sdt;
	this->IDkhach = counter;
	counter++;
	this->diem_thuong=diem_thuong;
}
bool InforKhach::setCK(int diem_thuong)
{
	this->chiet_khau = diem_thuong/10000;
	return true;
}
int InforKhach::getCK()const
{
	return this->chiet_khau;
}
int InforKhach::getIDkhach()const
{
	return this->IDkhach;
}
void InforKhach::Print()const
{
	cout<<this->IDkhach<<" "<<this->name<<endl;
}