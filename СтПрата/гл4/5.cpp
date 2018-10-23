#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct CandyBar
{
 string Name;
 int kkal;
 double weight;
};
int main()
{
 CandyBar snack = {"Mocha Munch", 350, 2.3};
 cout << "Candy: " << snack.Name <<endl;
 cout << snack.kkal << " Kkal" << endl;
 cout  << "Weight: " << snack.weight << endl;
}
