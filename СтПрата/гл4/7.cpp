#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct Pizza
{
 string NameOfComp;
 double diam;
 double weight;
};
int main()
{
 Pizza pizza;
 cout << "Name of company" << endl;
 getline (cin, pizza.NameOfComp);
 cout << "Diameter" << endl;
 cin >> pizza.diam;
 cout << "weight" << endl;
 cin >> pizza.weight;
 cout << "Name of company: " << pizza.NameOfComp << endl;
 cout << "Diameter: " << pizza.diam << endl;
 cout << "weight: " << pizza.weight << endl;
}
