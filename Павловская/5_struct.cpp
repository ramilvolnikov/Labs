#include <iostream>

using namespace std;

int main()
{
    struct STUDENT
     {
         char FIO[30];
         int group;
         int mark[5];
     };

     int n=10;
     STUDENT mas[n];

     for (int i=0; i<n; i++)
       {
           cout << "Name ";
           cin >> mas[i].FIO;

           cout << "Group ";
           cin >> mas[i].group;

           cout << "Marks ";
            for (int j=0; j<5; j++)
              {
                   cin >> mas[i].mark[j];
              }
           cout << endl;
       }

      STUDENT temp;
      for (int i = 0; i < 10 - 1; i++)
       {
        for (int j = 0; j < 10 - i - 1; j++)
          {
            if (mas[j].FIO[0] > mas[j + 1].FIO[0])
              {
                temp = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = temp;
              }
           }
        }

        int two=0;
        cout << "Stusents with mark ";
       for (int i=0; i<10; i++)
         {
             for (int j=0; j<5; j++)
               {
                   if (mas[i].mark[j]==2)
                    {
                        cout << mas[i].FIO << " group " << mas[i].group;
                        two++;
                        break;
                    }
               }
         }

        if (two==0) cout << "NO bad students";


    return 0;
}
