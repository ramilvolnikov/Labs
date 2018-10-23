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
int main(){
 CandyBar snack[3] = {"Mocha Munch", 350, 2.3,
                      "Chocolate", 445, 0.8,
                         "IceCream", 940, 3.1};
 cout << "Candy 1: " << snack[0].Name <<endl;
 cout << snack[0].kkal << " Kkal" << endl;
 cout  << "Weight: " << snack[0].weight << endl;

 cout << "Candy 2: " << snack[1].Name <<endl;
 cout << snack[1].kkal << " Kkal" << endl;
 cout  << "Weight: " << snack[1].weight << endl;

 cout << "Candy 3: " << snack[2].Name <<endl;
 cout << snack[2].kkal << " Kkal" << endl;
 cout  << "Weight: " << snack[2].weight << endl;
}
