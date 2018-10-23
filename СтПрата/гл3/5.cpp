#include <iostream>
using namespace std;
int main() {
cout << "Enter km: ";
long km;
cin >> km;
cout << "Enter liters: ";
long liters;
cin >> liters;
long double lkm;
lkm = double(liters*1.0/km);
cout << lkm << " liters on km";
return 0;
}
