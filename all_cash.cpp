#include <iostream>
#include <string>
#include <cstring>
#include <Windows.h>
using namespace std;

enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void SetColor(int text, ConsoleColor background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
class f;

class drinks {	
private:
	int lvl;
public:
	static double time;
	//конструктор по умолчанию 
	drinks() {

	}	

	int	fortress;
	int liters;
	int lvlperc;	
	void get_lvl() {
		cin >> lvl;
		this->lvlperc = lvl * 10;
	}
	//конструктор с параметрами
	drinks(int value_fort, int value_liters, int value_lvlperc, double vtime) {
		fortress = value_fort;
		liters = value_liters;
		lvlperc = value_lvlperc;		
	}
	//конструктор копирования
	drinks(const drinks& object)
	{
		
	}
	//деструктор
	~drinks()
	{
		if (time > 5) {
			cout << "Сработал деструктор. Ваш организм уничтожен." << endl;
		}
	}
	friend void get_f(drinks &fortress);	
};


double drinks::time;

class f
{
private:
	int gr=0;
	friend void get_f(drinks& fort, f& g);
};

void get_f(drinks &fort, f &g) {
	fort.fortress = g.gr;
	cin >> fort.fortress;
}

class watch 
{
public:
	int min,h;
	void get_w() 
	{
		cin >> h >> min;
	}
	void operator += (const watch &m) 
	{
		this->min+=m.min ;
	}
};

//простой пример одиночного наследования (никакой роли не играет)
class z 
{
	string s1;
	string s2;
};
class x : public z
{
	string s3;
};

//множественное наследование
class good
{
public:
	void g()
	{
		cout << "Мне хорошо" << endl;
	}
};

class bad
{
public: 
	void b() 
	{
		cout << "Мне плохо" << endl;
	}
};

class ok :public good, public bad
{	
};

//абстрактный класс и виртуальная функция 
class health 
{
public:
	virtual void lvlh() = 0;
};
//влоденный класс
class c1 
{	
public:
	int cz, cx, cy;
	class c2
	{
		int ca, cb, cc;
	};
};

int main()
{
	setlocale(LC_ALL, "Russian");	
	SetColor(Red, White);
	cout << "Warning!!! Пить плохо. " << endl;
	SetColor(Black, White);	

	drinks d1;
	f f1;
	watch w1;
	watch w2;
	cout << "Когда в последний раз пили? (время в формате чч мм)" << endl;	
	w1.get_w();	
	cout << "Ваш уровень (1-10)? " << endl;
	d1.get_lvl();
	cout << "Cколько градусов в вашем элексире? " << endl;
	get_f(d1,f1);
	cout << "Cколько миллилитров вам удалось выпить? " << endl;
	cin >> d1.liters;
	cout << "Введите вашу меру инерции (массу) в килограммах " << endl;
	int kg;
	cin >> kg;

	if (d1.fortress <= 2) { cout << "Вы пили квас" << endl; }
	else
	{
		if (d1.fortress < 12) { cout << "Вы пили пиво" << endl; }
		else
		{
			if (d1.fortress < 20) { cout << "Вы пили вино" << endl; }
			else
			{
				if (d1.fortress < 40) { cout << "Вы пили ликёр" << endl; }
				else
				{
					if (d1.fortress < 41) { cout << "Вы пили водку" << endl; }
					else
					{
						if (d1.fortress < 45) { cout << "Вы пили коньяк" << endl; }
						else
						{
							if (d1.fortress > 44) { cout << "Вы пили самогон" << endl; }
						}
					}
				}
			}
		}
	}

	double c;
	c = (double)(d1.fortress / 100.00);
	c = (double)(c * d1.liters);
	c = (double)(c/15.00);
	c = (double)(c*10 / (kg / 1.5));
	
	drinks::time = (double)c / 0.15;
	cout << "Концентрация в крови (в промилле) " << c << endl;
	drinks::time = drinks::time - drinks::time *(d1.lvlperc/100);
	cout << "Время выведения " << d1.time << " часа "<<endl;
	w2.min = d1.time * 60;
	w1.min += w1.h * 60;
	w2 += w1;
	w2.min = (w2.min / 60) / 24;
	cout <<"Примерно к "<< w2.min <<":00 вы будете огурцом!) "<< endl;
	drinks::time = c;		
	return 0;
}

