#include <iostream>
using namespace std;
int main() {
double lkm;
const double m=62.14;
const double g=3.875;
cout <<"Enter liters/100km: ";
cin >> lkm;
long double mg;
mg = m*g/lkm;
cout << mg<< endl;
return 0;
}
