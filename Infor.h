#pragma once
#include <iostream>
#include <string>
using namespace std;
class Infor
{
protected:
	string name;
	int year;
	string que_quan;
	string sdt;
	string cmnd;
public:
	Infor();
	Infor(string, int, string, string, string);
};
Infor::Infor(){}
Infor::Infor(string name, int year, string que_quan, string, string sdt)
{
	name=name;
	year=year;
	que_quan=que_quan;
	sdt=sdt;
}