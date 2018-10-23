#include <iostream>
double t(double);
int main()
{
	using namespace std;
	double(lyears);
	cout << "Enter the numÜer of light years: ";
	cin >> lyears;
	double aunits = t(lyears);
	cout << lyears << " light years = ";
	cout << aunits << " astronomical units." << endl;
	return 0;
}
double t(double ts)
{
	return(63240 * ts);
}
