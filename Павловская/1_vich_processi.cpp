#include <iostream>
using namespace std;
int main() {
float a,b,c,f,dx,xn,xk,x;

cout << "vvedite a ";
cin >> a;
cout << "vvedite b ";
cin >> b;
cout << "vvedite c ";
cin >> c;
cout << "vvedite dx ";
cin >> dx;
cout << "vvedite xn ";
cin >> xn;
cout << "vvedite xk ";
cin >> xk;

x=xn;
while (x<=xk)
{
	if ((a<0) && (c!=0))
	{
		f=a*x*x+b*x+c;
	}
	else if ((a>0) && (c==0))
	{
		f=-a/(x-c);
	}
	else
	{
		f=a*(x+c);
	}
	cout <<"F = "<<f<<" x = "<<x<<'\n';
	x=x+dx;
}
return 0;
}
