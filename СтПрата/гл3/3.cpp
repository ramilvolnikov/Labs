#include <iostream>
using namespace std;
int main() {
const double sm = 60.0;
const double mg = 60.0;
int deg;
int min;
int sec;
cout << "Enter à latitude in degrees, minutes, and seconds: " << endl;
cout << "First, enter the degrees: ";
cin >> deg;
cout << "Next, enter the minutes of arc: " ;
cin >> min;
cout << "Finally, enter the seconds of arc: ";
cin >> sec;
int s;
s=(deg*mg*sm)+(min*sm)+sec;
double g;
g=(s/sm)/mg;
cout <<deg<<" degrees, "<<min<<"  minutes, "<<sec<<" seconds = "<<g<<" degrees"<< endl;
return 0;
}
