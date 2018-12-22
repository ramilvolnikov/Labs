#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct scan_info
     {
    	char model[25];
	    int price;
	    double x_size;
	    double y_size;
	    int optr;
    	int grey;
     };

void zapis (int f_koich, scan_info znach_scan );
void sortirovka (scan_info* sortscan, int sortkolich);


void zapis (long f_kolich,  scan_info* znach_scan )
{
	ofstream binfile ("file.txt", ios::binary);
	binfile.write ((char*)&f_kolich, sizeof(f_kolich));

	for (int i=0; i<f_kolich; i++)
	 {
	 	binfile.write ((char*)&znach_scan[i].model, sizeof(znach_scan[i].model));
	 	binfile.write ((char*)&znach_scan[i].price, sizeof(znach_scan[i].price));
	 	binfile.write ((char*)&znach_scan[i].x_size, sizeof(znach_scan[i].x_size));
	 	binfile.write ((char*)&znach_scan[i].y_size, sizeof(znach_scan[i].y_size));
	 	binfile.write ((char*)&znach_scan[i].optr, sizeof(znach_scan[i].optr));
	 	binfile.write ((char*)&znach_scan[i].grey, sizeof(znach_scan[i].grey));
	 }

	binfile.close();

}



void sortirovka (scan_info* sortscan, long sortkolich)
{
	scan_info temp;
	int index=0;
	int schetchik=0;
	for (int i=0; i<sortkolich-1; i++)
	  {
	  	for (int j=i+1; j<sortkolich; i++)
	  	  {
	  	  	index=0;
	  	  	if (strcmp(sortscan[i].model,sortscan[j].model)==0)
	  	  	  {
	  	  	  	index=index+i+1;
	  	  	  	temp=sortscan[j];
	  	  	  	sortscan[j]=sortscan[index];
	  	  	  	sortscan[index]=temp;
	  	  	  	schetchik++;
			  }
		  }
		  i=schetchik+1;

	  }

	zapis (sortkolich,sortscan);

}


int main( )
{

	cout << "Vvedite kol-vo zapisei \n";
	long kolich;
	cin >> kolich;

	scan_info *scan= new scan_info [kolich];

	cout << "Vvedite dannie o scanax \n";
	for (int i=0; i<kolich; i++)
	  {
	  	cout << "\n model -";
	  	cin >> scan[i].model;

	  	cout << " price= ";
	  	cin >> scan[i].price;

	  	cout << " x_size= ";
	  	cin >> scan[i].x_size;

	  	cout << " y_size= ";
	  	cin >> scan[i].y_size;

	  	cout << " optr= ";
	  	cin >> scan[i].optr;

	  	cout << " grey= ";
	  	cin >> scan[i].optr;
	  }

	zapis (kolich,scan);
	sortirovka (scan, kolich);

	return 0;
}
