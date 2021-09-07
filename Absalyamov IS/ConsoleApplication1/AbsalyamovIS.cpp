// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Artist.h"
#include <unordered_map>
using namespace std;

void print_menu() {
    cout << "Выберите действие\n";
    cout << "1. Добавить художника\n";
    cout << "2. Вывести художников\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int action;
    unordered_map <int, ARTIST> artists;
    do
    {
        print_menu();
        cin >> action;
        switch (action) {
        case 1: {
            ARTIST artist;
            cin >> artist;
            artists.insert(make_pair(artist.GetID(), artist));
            break;
        }
        case 2: {
            for (const auto& artist : artists)
                cout << artist.second << endl;
        }
              return 0;
        }
        if (action != 0)
            system("pause");
    } while (action != 0);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
