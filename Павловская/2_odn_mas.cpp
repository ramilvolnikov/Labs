#include <iostream>
using namespace std;

int main()
{    const int max_size = 100;
    int tmp;
    int product;
    int sum;
    int left, right;
    int n;
    int v[max_size];

    do
    {
        cout << "Vvedite razmer massiva ne bolee " << max_size << " elementov:";
        cin >> n;
    }
    while (n<1 || n>max_size);

    cout << "Vvedite elementi " << endl;
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }


    product=1;
    for (int i=0; i<n; i+=2)
    {
        product *=v[i];
    }


    left=0;
    while (left<n && v[left]!=0)
    {
        left++;
    }


    right=n-1;
    while( right>=0 && v[right]!=0)
    {
        right--;
    }

    sum=0;
    for (int i=left; i<=right; i++)
    {
        sum+=v[i];

    }

    for (int i=1; i<n; ++i){
    for(int r=0; r<n-i; r++)
    {
        if(v[r]< v[r+1]) {
        	tmp=v[r];
        	v[r]=v[r+1];
        	v[r+1]=tmp;
        }
    }
    }

    cout << "Massiv: ";
    for (int i=0;i<n;i++) {
    	cout << v[i] << ";";
    }
    cout << endl;

    cout << "Proizvedenie elementov s chetnimi nomerami = " << product << endl;
    cout << "Summa elementov megdy pervim i poslednim nulyami = " << sum << endl;

    return 0;
}
