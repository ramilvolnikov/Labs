#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;
string path = "input.txt";

//вывод списка
void out(vector<string>& nom, vector<string>& from, vector<string>& who,
	vector<string>& day, vector<string>& time, vector<string>& dl) {

	for (auto i = 0; i < nom.size(); i++)
	{
		cout << nom[i] << " " << from[i] << " " << who[i] << " ";
		cout << day[i] << " " << time[i] << " " << dl[i] << endl;
	}
}

//добавить звонок
void add(vector<string>& nom, vector<string>& from, vector<string>& who,
	vector<string>& day, vector<string>& time, vector<string>& dl, int Number) {
	string str;

	int newNomber = nom.size()+1;
	str = to_string(newNomber);	
	auto it = nom.end();
	nom.insert(it, str);

	cout << "Кто звонил?" << endl;
	cin >> str;
	it = from.begin();
	advance(it, Number);
	from.insert(it, str);

	cout << "Кому звонили?" << endl;
	cin >> str;
	it = who.begin();
	advance(it, Number);
	who.insert(it, str);

	cout << "Введите дату звонка" << endl;
	cin >> str;
	it = day.begin();
	advance(it, Number);
	day.insert(it, str);

	cout << "Введите время звонка" << endl;
	cin >> str;
	it = time.begin();
	advance(it, Number);
	time.insert(it, str);

	cout << "Введите продолжительность звонка" << endl;
	cin >> str;
	it = dl.begin();
	advance(it, Number);
	dl.insert(it, str);
}

//удалить звонок
void del(vector<string>& nom, vector<string>& from, vector<string>& who,
	vector<string>& day, vector<string>& time, vector<string>& dl, int Number) {

	auto it = nom.end();
	advance(it, -1);
	nom.erase(it);

	it = from.begin();
	advance(it, Number);
	from.erase(it);

	it = who.begin();
	advance(it, Number);
	who.erase(it);

	it = day.begin();
	advance(it, Number);
	day.erase(it);

	it = time.begin();
	advance(it, Number);
	time.erase(it);

	it = dl.begin();
	advance(it, Number);
	dl.erase(it);
}

//сортировка по дате
void sd(vector<string>& nom, vector<string>& from, vector<string>& who,
	vector<string>& day, vector<string>& time, vector<string>& dl) {

	for (int i = 0; i < day.size() - 1; i++) {
		for (int j = 0; j < day.size() - i - 1; j++) {
			const char* str1 = day[j].c_str();
			const char* str2 = day[j + 1].c_str();
			if (strcmp(str1, str2) > 0) {
				from[j].swap(from[j + 1]);
				who[j].swap(who[j + 1]);
				day[j].swap(day[j + 1]);
				time[j].swap(time[j + 1]);
				dl[j].swap(dl[j + 1]);
			}
			else if (strcmp(str1, str2) == 0) {
				const char* str1 = time[j].c_str();
				const char* str2 = time[j + 1].c_str();
				if (strcmp(str1, str2) > 0) {
					from[j].swap(from[j + 1]);
					who[j].swap(who[j + 1]);
					day[j].swap(day[j + 1]);
					time[j].swap(time[j + 1]);
					dl[j].swap(dl[j + 1]);
				}
			}
		}
	}
}

//сортировка по длительности
void sdl(vector<string>& nom, vector<string>& from, vector<string>& who,
	vector<string>& day, vector<string>& time, vector<string>& dl) {
	for (int i = 0; i < dl.size() - 1; i++) {
		for (int j = 0; j < dl.size() - i - 1; j++) {
			const char* str1 = dl[j].c_str();
			const char* str2 = dl[j + 1].c_str();
			if (strcmp(str1, str2) > 0) {
				from[j].swap(from[j + 1]);
				who[j].swap(who[j + 1]);
				day[j].swap(day[j + 1]);
				time[j].swap(time[j + 1]);
				dl[j].swap(dl[j + 1]);
			}
		}
	}

}

//исходящие звонки
void output(vector<string>& nom, vector<string>& from, vector<string>& who,
	vector<string>& day, vector<string>& time, vector<string>& dl, string nameSearch) {
	for (int i = 0; i < nom.size(); i++) {
		if (nameSearch == from[i]) {
			cout << nom[i] << " " << from[i] << " " << who[i] << " ";
			cout << day[i] << " " << time[i] << " " << dl[i] << endl;
		}
	}
}

//входящие звонки
void input(vector<string>& nom, vector<string>& from, vector<string>& who,
	vector<string>& day, vector<string>& time, vector<string>& dl, string nameSearch) {
	for (int i = 0; i < nom.size(); i++) {
		if (nameSearch == who[i]) {
			cout << nom[i] << " " << from[i] << " " << who[i] << " ";
			cout << day[i] << " " << time[i] << " " << dl[i] << endl;
		}
	}
}




void overWriteFile(vector<string>& nom, vector<string>& from, vector<string>& who,
	vector<string>& day, vector<string>& time, vector<string>& dl) {
	ofstream fout(path);
	for (auto i = 0; i < nom.size(); i++)
	{
		fout << nom[i] << " " << from[i] << " " << who[i] << " ";
		fout << day[i] << " " << time[i] << " " << dl[i] << endl;
	}
}



int main()
{
	setlocale(LC_ALL, "Russian");
	
	vector<string> nom;			// номер
	vector<string> from;		// от кого
	vector<string> who;			// кому
	vector<string> day;			// дата
	vector<string> time;		// время
	vector<string> dl;			// длительность

	//обработка исключений
	ifstream file;
	file.exceptions(ifstream::badbit | ifstream::failbit);

	try {
		file.open(path);
	}
	catch (const std::exception & ex) {
		cout << ex.what() << endl;
		cout << "Can not open file" << endl;
	}
	

	int count = 0;
	while (file) {
		string str;

		file >> str;			// действия для тел. книги
		count++;
		switch (count)
		{
		case 1:
			if (str == "\0") {
				break;
			}
			nom.push_back(str);
			continue;
		case 2:
			from.push_back(str);
			continue;
		case 3:
			who.push_back(str);
			continue;
		case 4:
			day.push_back(str);
			continue;
		case 5:
			time.push_back(str);
			continue;
		case 6:
			dl.push_back(str);
			count = 0;
			continue;
		default:
			continue;
		}

	}

	// чтение действий пользователя
	int a = -1;
	while (a != 0) {
		cout << "Здравствуйте!" << endl;
		cout << "Чтобы завершить сеанс нажмите 0" << endl;
		cout << "Для получения списка - 1" << endl;
		cout << "Добавить звонок - 2" << endl;
		cout << "Удалить звонок - 3" << endl;
		cout << "Сортировка по дате - 4" << endl;
		cout << "Сортировка по длительности - 5" << endl;
		cout << "Вывод исходящих - 6" << endl;
		cout << "Вывод входящих - 7" << endl;

		cin >> a;
		cout << endl;
		int sellNomer;
		int sellNomer2;
		string nameSearch;
		switch (a)
		{
		case 1:
			out(nom, from, who, day, time, dl);
			continue;
			cout << endl;
		case 2:
			cout << "На какой номер нужно добавить звонок" << endl;
			cin >> sellNomer;
			add(nom, from, who, day, time, dl, sellNomer);
			overWriteFile(nom, from, who, day, time, dl);
			cout << endl;
			continue;
		case 3:
			cout << "Какой номер удалить" << endl;
			cin >> sellNomer2;
			del(nom, from, who, day, time, dl, sellNomer2);
			overWriteFile(nom, from, who, day, time, dl);
			cout << endl;
			continue;
		case 4:
			sd(nom, from, who, day, time, dl);
			overWriteFile(nom, from, who, day, time, dl);
			continue;
		case 5:
			sdl(nom, from, who, day, time, dl);
			overWriteFile(nom, from, who, day, time, dl);
			cout << endl;
			continue;
		case 6:
			cout << "Чьи звонки хотите вывести:" << endl;
			cin >> nameSearch;
			output(nom, from, who, day, time, dl, nameSearch);
			cout << endl;
			continue;
		case 7:
			cout << "Звонки получателя" << endl;
			cin >> nameSearch;
			input(nom, from, who, day, time, dl, nameSearch);
			cout << endl;
			continue;		
		default:
			break;
		}
	}
	cout << endl;
}

