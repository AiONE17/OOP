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
	cout << "������� ���\n";
	cin.ignore(256, '\n');
	getline(in, artist.name, '\n');
	cout << "������� �������\n";
	getline(in, artist.surname, '\n');
	cout << "������� ��� ��������\n";
	cin >> artist.birthyear;
	cout << "������� ��� ������\n";
	cin >> artist.deathyear;
	cout << "������� �������\n";
	cin >> artist.age;
	cout << "������� ���������� ������\n";
	cin >> artist.numbofarts;
	cout << "������� ������\n";
	cin >> artist.country;
	//getline(in, artist.country, '\n');
	return in;
}
ostream& operator << (ostream& out, const ARTIST& artist)
{
	out << "�������������: " << artist.id << endl;
	out << "���: " << artist.name << endl;
	out << "�������: " << artist.surname << endl;
	out << "��� ��������: " << artist.birthyear << endl;
	out << "��� ������: " << artist.deathyear << endl;
	out << "�������: " << artist.age << endl;
	out << "���������� ������: " << artist.numbofarts << endl;
	out << "������: " << artist.country << endl;
	return out; 
}