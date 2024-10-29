// Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "Введіть номер місяця x: ";
	cin >> x;
	switch (x)
	{
	case 1: cout << "Січень"; break;
	case 2: cout << "Лютий"; break;
	case 3: cout << "Березень"; break;
	case 4: cout << "Квітень"; break;
	case 5: cout << "Травень"; break;
	case 6: cout << "Червень"; break;
	case 7: cout << "Липень"; break;
	case 8: cout << "Серпень"; break;
	case 9: cout << "Вересень"; break;
	case 10: cout << "Жовтень"; break;
	case 11: cout << "Листопад"; break;
	case 12: cout << "Грудень"; break;
	default: cout << "Не існує"; break;
	}

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
