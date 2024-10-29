// Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

    double x, a, b, c, f;
    bool f_ = true;
    cout << "Enter x, a, b, c \n";
    cin >> x >> a >> b >> c;
    if (x = 0 && b != 0) f = a * (x + c) * (x + c) - b;
    else
        if (x == 0 && b == 0 && -c != 0) f = (x - a) / (-c);
        else
            if (c != 0) f = a + (x / c);
            else f_ = false;
    if (f_ == false) cout << "F is not definded \n";
    else cout << "F = " << f;
    /*int n;
    cout << "Введіть номер планети Сонячної системи: \n";
    cin >> n;
    switch (n)
    {
    case 1: cout << "Меркурій"; break;
    case 2: cout << "Венера"; break;
    case 3: cout << "Земля"; break;
    case 4: cout << "Марс"; break;
    case 5: cout << "Юпітер"; break;
    case 6: cout << "Сатурн"; break;
    case 7: cout << "Уран"; break;
    case 8: cout << "Нептун"; break;
    default: cout << "Не існує"; break;
    }*/
    cout << "I learning console";
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
