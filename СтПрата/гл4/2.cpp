#include <iostream>
#include <string>
int main () {
using namespace std;
string name;
string dessert;
cout << "Введите ваше имя : \n" ;
cin >> name;
cout << "Введите ваш любимый десерт : \n" ;
cin >> dessert;
cout << "У меня есть вкусный " << dessert;
cout << " для вас, " << name << ".\n";
return 0;
}
