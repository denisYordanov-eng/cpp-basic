// 03-RectangleArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
using std::cin;
using std::string;

int main()
{
    int sideA;
    int sideB;
    int area;

    cin >> sideA;
    cin >> sideB;
    
    area = sideA * sideB;
    cout << area << endl;
}

