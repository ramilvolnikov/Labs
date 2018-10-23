#include <iostream>
using namespace std;
int main() {
cout << "What is your first name? ";
char fname[100];
cin.getline(fname, 100);
cout << "What is your last name? ";
char lname[100];
cin.getline(lname, 100);
cout << "What letter grade do you deserve? ";
char letter;
cin >> letter;
cout << "What is your age? ";
int age;
cin >> age;
cout << "Name: " << lname << ", " << fname << endl;
cout << "Grade: " << char(letter+1) << endl;
cout << "Age: " << age << endl;
return 0;
}
