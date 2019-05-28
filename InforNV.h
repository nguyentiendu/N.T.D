#pragma once
#include <iostream>
#include "Infor.h"
using namespace std;
class InforNV : public Infor
{
private:
	int ID_NV;
public:
	InforNV();
	InforNV(string, int, string, string, string);
	int getID_NV()const;
	static int counter;
	void Print()const;
};
int InforNV::counter=1;
InforNV::InforNV()
{}
InforNV::InforNV(string name, int year, string que_quan, string cmnd, string sdt)
{
	this->name = name;
	year = year;
	que_quan = que_quan;
	cmnd = cmnd;
	sdt = sdt;
	this->ID_NV = counter;
	counter++;
}
int InforNV::getID_NV()const
{
	return this->ID_NV;
}
void InforNV::Print()const
{
	cout<<this->ID_NV<<" "<<this->name<<endl;
}