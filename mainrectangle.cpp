#include <iostream>

#include "rectangle.h"
using namespace std;
int main()
{
	point a(4,5);
	point b(6,13);
	rectangle c(a,b);
	cout<<c.getArea()<<endl;
	cout<<c.getPerimeter()<<endl;
	return 0;
}
