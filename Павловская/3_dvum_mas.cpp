#include <iostream>
int A[20][20],n,m;
using namespace std;
int main()
{
  cout<<"vvedi n,m ";
  cin>>n>>m;
  int i,j;
  for(i=0; i<n; i++)
  {
  for(j=0; j<m; j++)
   cin>>A[i][j];
  }
  int nulstolb;
  for (int j=0; j<m; j++)
        {
        	for (int i=0; i<n; i++)
        	  {
        	      if (A[i][j]==0)
  	        {
  		  nulstolb++;
  		  break;
  	        }
        	  }
        }

  int max=0,k=0,nom=0;
       for (int j=0; j<m; j++)
         {
         	for (int i=0; i<(n-1); i++)
         	  {
         	  	if (A[i][j]==A[i][j+1]) k++;
         	  }
         	if  (k>max)
         	  {
         	  	max=k;
         	  	nom=i;
         	  }
         	k=0;
         }
cout << nulstolb <<endl;
cout << nom;
  return 0;
}
