#include <iostream>
void time(int, int);
using namespace std;
int main()
{
	int h;
	cout << "Enter the number of hours: ";
	cin >> h;
	int min;
	cout << "Enter the number of minutes: ";
	cin >> min;
	h = h+min/60;
	min = min % 60;
	h = h % 24;
	time(h, min);
	return 0;
}
void time(int m, int n)
{
    cout << "Time: " << m << ":" << n << endl;
}
