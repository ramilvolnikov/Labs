#include <iostream>
using namespace std;
int main() {
	using namespace std;
	const int dvf = 12;
	const double lbvkg = 2.2;
	const double invm = 39.37;
	int ft;
		cout << "Enter height in ft: ";
		cin >> ft;
	int in;
		cout << "Enter height in inches: ";
		cin >> in;
	int lb;
		cout << "Enter weight in pounds: ";
		cin >> lb;
	in = dvf*ft + in;
	double mas;
	mas = lb/lbvkg;
	double height;
	height = in/invm;
	double bmi;
	bmi = mas/(height*height);
	cout << "Body mass index = " << bmi;
	return 0;
}
