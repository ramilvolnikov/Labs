#include <iostream>

using namespace std;

int main()
{
    struct STUDENT
     {
         char FIO[30];
         int nGrup;
         int otmetka[5];
     };

     STUDENT *mas = new STUDENT[10];

     for (int i=0; i<10; i++)
       {
           cout << "imy: ";
           cin.getline (mas[i].FIO, 30);

           cout << "grup: ";
           cin >> mas[i].nGrup;

           cout << "ozenci : ";
            for (int j=0; j<5; j++)
              {
                   cin >> mas[i].otmetka[j];
              }
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

        int dvoika=0;
        cout << "Студенты у которых есть двойки: \n";
       for (int i=0; i<10; i++)
         {
             for (int j=0; j<5; j++)
               {
                   if (mas[i].otmetka[j]==2)
                    {
                        cout << mas[i].FIO << " из группы " << mas[i].nGrup << endl;
                        dvoika++;
                        break;
                    }
               }
         }

        if (dvoika==0) cout << "Двоичников нет."  ;

       delete mas;


    return 0;
}
