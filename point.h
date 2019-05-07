#include <iostream>
using namespace std;
class point{
private:
	double x;
	double y;
public:
	point();
	point(double, double);
	void setX(double);
	void setY(double);
	double getX()const;
	double getY()const;
	
};
point::point()
{
	this->x=0.0;
	this->y=0.0;
}
point::point(double x, double y)
{
	this->x=x;
	this->y=y;
}
void point::setX(double x)
{
	this->x=x;
}
void point::setY(double y)
{
	this->y=y;
}
double point::getX()const
{
	return this->x;
}
double point::getY()const
{
	return this->y;
}




