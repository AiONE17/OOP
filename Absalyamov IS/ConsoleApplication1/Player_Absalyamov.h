#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class Player_Absalyamov
{
private:
	int id;
	static int MaxID;
	string name;
	string surname;
	int age;
	int number;
	string country;
public: 
	void INCONSOLE();
	void OUTCONSOLE();
	void FIN(ifstream& in);
	void FOUT(ofstream& out);
};

