#include "Artist.h"
int ARTIST::MaxID = 1;
ARTIST::ARTIST()
{
	id = MaxID;
	MaxID++;
}
int ARTIST::GetID() const
{
	return id;
}
istream& operator >> (istream& in, ARTIST& artist)
{
	cout << "Введите имя\n";
	cin.ignore(256, '\n');
	getline(in, artist.name, '\n');
	cout << "Введите фамилию\n";
	getline(in, artist.surname, '\n');
	cout << "Введите год рождения\n";
	cin >> artist.birthyear;
	cout << "Введите год смерти\n";
	cin >> artist.deathyear;
	cout << "Введите возраст\n";
	cin >> artist.age;
	cout << "Введите количество картин\n";
	cin >> artist.numbofarts;
	cout << "Введите страну\n";
	cin >> artist.country;
	//getline(in, artist.country, '\n');
	return in;
}
ostream& operator << (ostream& out, const ARTIST& artist)
{
	out << "Идентификатор: " << artist.id << endl;
	out << "Имя: " << artist.name << endl;
	out << "Фамилия: " << artist.surname << endl;
	out << "Год Рождения: " << artist.birthyear << endl;
	out << "Год смерти: " << artist.deathyear << endl;
	out << "Возраст: " << artist.age << endl;
	out << "Количество картин: " << artist.numbofarts << endl;
	out << "Страна: " << artist.country << endl;
	return out; 
}