#include <stdafx.h>
#include <iostream>
using namespace std;
int main() {
	using namespace std;
	const int dvf = 12;
	int inch;
	cout << "Enter height in inches:_________\b\b\b\b\b\b\b\b\b";
	cin >> inch;
	int ft;
	ft = inch/dvf;
	inch = inch%dvf;
	cout << ft<< " ft and " << inch << " in";
	return 0;
}