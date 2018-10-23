#include <iostream>
#include <cstring>
using namespace std;
int main() {
cout << "Enter your first name ";
char fname[100];
cin >> fname;
cout << "Enter your first name ";
char lname[100];
cin >> lname;
cout << "Here's the information in à single string: " << lname << ", " << fname;
return 0;
}
