#include "Player_Absalyamov.h"

void Player_Absalyamov::INCONSOLE()
{
	cout << "Enter the firstname\n";
	cin >> this->name;
	cout << "Enter the lastname\n";
	cin >> this->surname;
	cout << "Enter the age\n";
	cin >> this->age;
	cout << "Enter the player's number\n";
	cin >> this->number;
	cout << "Enter the player's country\n";
	cin >> this->country;
}
void Player_Absalyamov ::OUTCONSOLE()
{
	cout << "Firstname: " << this->name << endl << "Lastname: " << this->surname << endl << "Age: " << this->age << endl << "Number: " << this->number << endl << "Country: " << this->country << endl << endl;
}

void Player_Absalyamov::FIN(ifstream& in)
{
	in >> this->name >> this->surname >> this->age >> this->number >> this->country;
}

void Player_Absalyamov::FOUT(ofstream& out)
{
	out << this->name << " " << this->surname << " " << this->age << " " << this->number << " " << this->country << " ";
}