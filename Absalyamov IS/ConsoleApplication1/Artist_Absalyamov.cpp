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
	cout << "¬ведите им€\n";
	cin.ignore(256, '\n');
	getline(in, artist.name, '\n');
	cout << "¬ведите фамилию\n";
	getline(in, artist.surname, '\n');
	cout << "¬ведите год рождени€\n";
	cin >> artist.birthyear;
	cout << "¬ведите год смерти\n";
	cin >> artist.deathyear;
	cout << "¬ведите возраст\n";
	cin >> artist.age;
	cout << "¬ведите количество картин\n";
	cin >> artist.numbofarts;
	cout << "¬ведите страну\n";
	cin >> artist.country;
	//getline(in, artist.country, '\n');
	return in;
}
