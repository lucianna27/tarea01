#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{float a=1, b=1, c, x1, x2, x3, x4;
int n=1;
while(n<11){
	c=pow(10,-n);
	x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	x3=(-2*c)/(b+sqrt(pow(b,2)-4*a*c));
	x4=(-2*c)/(b-sqrt(pow(b,2)-4*a*c));
	cout<<"c="<<c<<endl;
	cout<<"raiz 1 "<<x1<<endl;
	cout<<"raiz 2 "<<x2<<endl;	
	cout<<"raiz 3 "<<x3<<endl;
	cout<<"raiz 4 "<<x4<<endl;
	cout<<endl;
	n++;
};
return 0;
}
