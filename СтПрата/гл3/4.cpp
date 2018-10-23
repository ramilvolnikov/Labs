#include <iostream>
using namespace std;
int main() {
const int sm = 60;
const int sh = 60;
const int sd = 86400;
cout << "Enter the number of seconds: ";
long sec;
cin >> sec;
int days;
int min;
days = sec/sd;
min=((sec%sd)/sm)%sh;
int s;
s=(sec%sd)%sm;
cout <<sec<<" seconds = "<<days<<" days, "<<min<<" minutes, "<<s<<" seconds"<< endl;
return 0;
}
