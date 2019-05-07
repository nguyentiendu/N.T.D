#include <iostream>
#include "point.h"
#include <cmath>
using namespace std;
class rectangle{
private:
	point tf;
	point br;
public:
	rectangle();
	rectangle(point tf, point br);
	rectangle(double,double,double,double);
	bool settf(const point &);
	bool setbr(const point &);
	bool settf(double, double);
	bool setbr(double, double);
	point gettf()const;
	point getbr()const;
	double getArea()const;
	double getPerimeter()const;
};

rectangle::rectangle()
{
	this->tf.setX(0);
	this->br.setX(0);
	this->tf.setY(0);
	this->br.setY(0);
}
rectangle::rectangle(point tf, point br)
{
	this->tf=tf;
	this->br=br;
}
rectangle::rectangle(double a,double b,double c,double d)
{
	this->tf.setX(a);
	this->br.setX(b);
	this->tf.setY(c);
	this->br.setY(d);
}
bool rectangle::settf(const point &a)
{
	this->tf=a;
	return true;
}
bool rectangle::setbr(const point &a)
{
	this->br=a;
	return true;
}
bool rectangle::settf(double a, double b)
{
	this->tf=point(a,b);
	return true;
}
bool rectangle::setbr(double a, double b)
{
	this->br=point(a,b);
	return true;
}
point rectangle::gettf()const
{
	return this->tf;
}
point rectangle::getbr()const
{
	return this->br;
}
double rectangle::getArea()const
{
	double cd=tf.getX()-br.getX();
	double cr=tf.getY()-br.getY();
	double result1 = abs(cd*cr);
	return result1;	
}
double rectangle::getPerimeter()const
{
	double cd=abs(tf.getX()-br.getX());
	double cr=abs(tf.getY()-br.getY());
	double result2 = (cd+cr)*2;	
	return result2;
}
