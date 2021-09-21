#include "Team_Absalyamov.h"

void Team_Absalyamov::add(Player_Absalyamov* player)
{
	team.push_back(player);
}

void Team_Absalyamov::OUTCONSOLE()
{
	for (Player_Absalyamov* player : team) {
		player->OUTCONSOLE();
	}
}

void Team_Absalyamov::FIN()
{
	cout << "Enter the filename ";
	string filename;
	cin >> filename;
	ifstream in;
	in.open(filename, ios::in);
	int count;
	in >> count;
	for (int i = 0; i < count; i++)
	{
		Player_Absalyamov* player = new Player_Absalyamov();
		player->FIN(in);
		this->add(player);
	}

	in.close();
}

void Team_Absalyamov::FOUT()
{
	cout << "Enter the filename ";
	string filename;
	cin >> filename;
	ofstream out;
	out.open(filename, ios::out);
	out << this->team.size() << endl;
	for (auto player : this->team) {
		player->FOUT(out);
	}
	out.close();
}

void Team_Absalyamov::clear()
{
	for (auto player : this->team) {
		delete player;
	}
	this->team.clear();
}