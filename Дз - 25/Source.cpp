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
//������ 1
void showMovie(movies& n) {
	cout << "�������� ������  - " << n.title << endl;
	cout << "��� ������ - " << n.year << endl;
	cout << "���� - " << n.genre << endl;
	cout << "����������������� - " << n.duration << endl;
	cout << "���� ����� - " << n.price << endl;
}
//������ 2
string expensive(movies& n1, movies& n2, movies& n3) {
	if (n1.price > n2.price && n1.price > n3.price)
		return n1.title;
	if (n2.price > n1.price && n2.price > n3.price)
		return n2.title;
	if (n3.price > n1.price && n3.price > n2.price)
		return n3.title;
}
//������ 3
void updateInfo(movies& n) {
	cout << "�������� ��������� �������� ������ ������ � ������ \"One_plus_one\": " << endl;
	cout << "1-> �������� ������: " << endl;
	cout << "2-> ��� ������: " << endl;
	cout << "3-> ����: " << endl;
	cout << "4-> �����������������:" << endl;
	cout << "5-> ���� �����: " << endl;

	int x;
	cin >> x;
	cin.ignore();
	switch (x)
	{
	case 1: {cout << "������� ����� �������� ������: "; getline(cin, n.title); } break;
	case 2: {cout << "������� ����� ��� ������ ������: "; cin >> n.year; } break;
	case 3: {cout << "������� ����� ���� ������: "; getline(cin, n.genre); } break;
	case 4: {cout << "������� ����� ����������������� ������: "; cin >> n.duration; } break;
	case 5: {cout << "������� ����� ���� �����: "; cin >> n.price; } break;
	}
}



int main() {
	setlocale(LC_ALL, "ru");

	movies One_plus_one = { "1+1", 2011, "�����", 120 ,100.00 };
	movies Brother = { "����", 1997, "�����", 100, 150.00 };
	movies Dog = { "���-��� ��", 1982, "����������", 20, 50.00 };

	//������ 1
	cout << "������ 1" << endl;
	showMovie(One_plus_one);
	cout << endl;
	showMovie(Brother);
	cout << endl;
	showMovie(Dog);
	cout << endl;

	//������ 2
	cout << "������ 2" << endl;
	cout << "����� � ����� ������� �����: " << expensive(One_plus_one, Brother, Dog) << endl << endl;

	//������ 3
	cout << "������ 3" << endl;
	updateInfo(One_plus_one);
	cout << endl;
	cout << "��������� �������" << endl;
	showMovie(One_plus_one);


	return 0;
}




