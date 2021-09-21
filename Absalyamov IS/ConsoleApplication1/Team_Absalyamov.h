#pragma once
#include <vector>
#include "Player_Absalyamov.h"
class Team_Absalyamov
{
private:
	vector <Player_Absalyamov*> team;
public: 
	void add(Player_Absalyamov*);
	void OUTCONSOLE();
	void FIN();
	void FOUT();
	void clear();
};

