#pragma once
#include <string>
#include <iostream>
using namespace std;
class ARTIST
{
	int id;
	static int MaxID;
	string name;
	string surname;
	int age;
	int birthyear;
	int deathyear;
	int numbofarts;
	string country;
public: 
	friend std::istream& operator >> (std::istream& in, ARTIST& artist);
	friend std::ostream& operator << (std::ostream& out, const ARTIST& artist);
	ARTIST();
};

