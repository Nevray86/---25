#include <iostream>
#include <string>

using namespace std;

struct movies {
	string title;
	int year;
	string genre;
	int duration;
	float price;
};
//задача 1
void showMovie(movies& n) {
	cout << "Название фильма  - " << n.title << endl;
	cout << "Год выхода - " << n.year << endl;
	cout << "Жанр - " << n.genre << endl;
	cout << "Продолжительность - " << n.duration << endl;
	cout << "Цена Диска - " << n.price << endl;
}
//задача 2
string expensive(movies& n1, movies& n2, movies& n3) {
	if (n1.price > n2.price && n1.price > n3.price)
		return n1.title;
	if (n2.price > n1.price && n2.price > n3.price)
		return n2.title;
	if (n3.price > n1.price && n3.price > n2.price)
		return n3.title;
}
//задача 3
void updateInfo(movies& n) {
	cout << "Выберите изменения котороые хотите внести в фильме \"One_plus_one\": " << endl;
	cout << "1-> Название фильма: " << endl;
	cout << "2-> Год выхода: " << endl;
	cout << "3-> Жанр: " << endl;
	cout << "4-> Продолжительность:" << endl;
	cout << "5-> Цена Диска: " << endl;

	int x;
	cin >> x;
	cin.ignore();
	switch (x)
	{
	case 1: {cout << "Введите новое название фильма: "; getline(cin, n.title); } break;
	case 2: {cout << "Введите новый год выхода фильма: "; cin >> n.year; } break;
	case 3: {cout << "Введите новый жанр фильма: "; getline(cin, n.genre); } break;
	case 4: {cout << "Введите новую продолжительность фильма: "; cin >> n.duration; } break;
	case 5: {cout << "Введите новую цену диска: "; cin >> n.price; } break;
	}
}



int main() {
	setlocale(LC_ALL, "ru");

	movies One_plus_one = { "1+1", 2011, "Драма", 120 ,100.00 };
	movies Brother = { "Брат", 1997, "Драма", 100, 150.00 };
	movies Dog = { "Жил-был пёс", 1982, "мультфильм", 20, 50.00 };

	//Задача 1
	cout << "Задача 1" << endl;
	showMovie(One_plus_one);
	cout << endl;
	showMovie(Brother);
	cout << endl;
	showMovie(Dog);
	cout << endl;

	//Задача 2
	cout << "Задача 2" << endl;
	cout << "Фильм с самой высокой ценой: " << expensive(One_plus_one, Brother, Dog) << endl << endl;

	//Задача 3
	cout << "Задача 3" << endl;
	updateInfo(One_plus_one);
	cout << endl;
	cout << "Изменения внесены" << endl;
	showMovie(One_plus_one);


	return 0;
}




