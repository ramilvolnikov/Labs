#include <fstream>
#include <iostream>
#include <cstring>
#include <conio.h>
#include <windows.h>

using namespace std;

void videlenie (int x,int y, int konec, char text[70]);

int main()
{
   ifstream fin("gaga.dat");

   while (fin)
   {
   	string str;
   	getline(fin,str);
   	cout << str << endl;
   }
   fin.close();
   fin.open("gaga.dat", ios_base::in);
   int nomerStr=-1;
   char r;
   int glasn;
   while(fin)
   {
    nomerStr++;
    char proverka [70];
    fin.getline(proverka, 70);
    for (int i=0; i<=strlen(proverka); i++)
      {
       if (i==strlen(proverka)-1)
        {
       	 if (proverka[i]=='e' or proverka[i]=='y' or proverka[i]=='u' or proverka[i]=='i'
	      or proverka[i]=='o' or proverka[i]=='a' )
	        {
		         glasn++;
	        	 r=getch();
      	 	  	 int j=i;
      	 	  	 int nachalo;
      	 	  	 while (proverka[j]!=' ')
      	 	  	   {
			      if (j==0) {break;}
      	 	  	      nachalo=j;
      	 	  	      j--;
			    }

			 int konecc=i;
			videlenie (nachalo,nomerStr, konecc, proverka);
	        }
	 }

      	if (proverka[i]==' ')
      	 {
      	 	if (ispunct(proverka[i-1])!=0 )
      	 	  {
      	 	  	if (proverka [i-2]=='e' or proverka [i-2]=='y' or proverka [i-2]=='u' or proverka [i-2]=='i' or proverka [i-2]=='o' or proverka [i-2]=='a')
      	 	  	   {
				  glasn++;
      	 	  	   	  r=getch();
      	 	  	   	  int j=i-2;
      	 	  	   	  int nachalo;
      	 	  	   	  while (proverka[j]!=' ')
      	 	  	   	    {
					if (j==0) {break;}
      	 	  	   	    	nachalo=j;
      	 	  	   	    	 j--;
				     }

				    int konecc=i-2;
			            videlenie (nachalo,nomerStr, konecc, proverka);
			    }
		  }

	          else
	           {
	             if (ispunct(proverka[i-1])==0 )
      	     	      {
      	 	    	if (proverka [i-1]=='e' or proverka [i-1]=='y' or proverka [i-1]=='u' or proverka [i-1]=='i' or proverka [i-1]=='o' or proverka [i-1]=='a')
      	 	  	    {
				  glasn++;
      	 	  	          r=getch();
      	 	  	   	  int j=i-1;
      	 	  	   	  int nachalo;
      	 	  	   	  while (proverka[j]!=' ')
      	 	  	   	    {
					 if (j==0) {break;}
      	 	  	   	    	 nachalo=j;
      	 	  	   	    	 j--;
				    }

					 int konecc=i-1;
					 videlenie (nachalo,nomerStr, konecc, proverka);
			      }
		        }

		     }

		 }
	  }

   };

  cout << "Количество гласных в тексте = " << glasn;
}

void videlenie (int x,int y,int konec,char text[70])
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
                       SetConsoleTextAttribute(hStdOut,
                       BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_RED |
                       FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

                       HANDLE hhStdout;
                       COORD destCoord;
                       hhStdout = GetStdHandle(STD_OUTPUT_HANDLE);
                       destCoord.X = x;
                       destCoord.Y = y;
                       SetConsoleCursorPosition(hhStdout, destCoord);
					   while (x<=konec)
					     {
					     	cout << text[x];
					     	x++;
						 }
}
