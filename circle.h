#include <iostream>
using namespace std;
#include "point.h"
class circle{
private:
	point I;
	double r;
public:
	circle();
	circle(point I, double r);
	circle(double, double, double);
	bool setI(const point &);
	bool setR(const double &);
	bool setI(double, double);
	point getI()const;
	double getR()const;
	double getArea()const;
	double getPerimeter()const;
};
circle::circle()
{
	this->I.setX(0);
	this->I.setY(0);
	this->r=0;
}
circle::circle(point I, double r)
{
	this->I=I;
	this->r=r;
}
circle::circle(double a, double b, double c)
{
	this->I.setX(a);
	this->I.setY(b);
	this->r=c;
}
bool circle::setI(const point &a)
{
	this->I=a;
	return true;
}
bool circle::setR(const double &a)
{
	if (a>0)
	{
		this->r=a;
		return true;
	}
	return false;
}
point circle::getI()const
{
	return this->I;
}
double circle::getR()const
{
	return this->r;
}
double circle::getArea()const
{
	const double PI = 3.14;
	double R=getR();
	double result1=PI*R*R;
	return result1;
}
double circle::getPerimeter()const
{
	const double PI = 3.14;
	double R=getR();
	double result2=2*PI*R;
	return result2;
}
