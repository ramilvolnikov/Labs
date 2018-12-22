#include <iostream>

using namespace std;

void Matr0 (int array[3][5], int str, int stlb);
void MatrElement (int array[3][5],int  str, int stlb);

int main( )
{

    int const m=3, n=5;

    int matr[m][n]=
     {
         {1,4,0,6,9},
         {1,0,0,3,9},
         {2,2,2,5,1},
     };

     Matr0 (matr,m,n);
     MatrElement(matr,m,n);

	return 0;
}

void Matr0 (int array[3][5], int str, int stlb)
 {
      int stolb0=0;
     for (int i=0; i<stlb; i++)
      {
      	for (int j=0; j<str; j++)
      	  {
      	      if (array[j][i]==0)
	           {
		        stolb0++;
		        break;
	           }
      	  }
      }
      cout << stolb0 << " - количесвто столбцов, где есть хотя бы один нулевой элемент" << endl;
 }


void MatrElement (int array[3][5],int  str, int stlb)
 {
     int max_odinakov=0,odinakov=0,iodinakov=0;
     for (int i=0; i<str; i++)
       {
       	for (int j=0; j<(stlb-1); j++)
       	  {
       	  	if (array[i][j]==array[i][j+1]) odinakov++;
       	  }
       	if  (odinakov>max_odinakov)
       	  {
       	  	max_odinakov=odinakov;
       	  	iodinakov=i;
       	  }
       	odinakov=0;
       }
     cout <<  " В строке под номером " << iodinakov+1 << " находится самая длинная серия одинаковых элементов";
 }
