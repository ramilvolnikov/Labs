#include <iostream>
#include <cstring>
using namespace std;
int main() {
cout << "Enter your first name ";
string fname;
cin >> fname;
cout << "Enter your first name ";
string lname;
cin >> lname;
cout << "Here's the information in à single string: " << lname << ", " << fname;
return 0;
}
