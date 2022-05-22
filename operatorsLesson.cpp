//
// Created by Max Boykin on 5/22/22.
//

#include <iostream>
#include <string>

using namespace std;

void operatorsLesson() {
    cout << "Arithmetic Operators:" << endl;
    int x = 4, y = 2;

    cout << x + y << endl;
    cout << x / y << endl;
    cout << --y << endl;

    cout << "Compound Assignment Operators:" << endl;
    int z = 5;
    z -= 2;
    cout << z << endl;
    z *= 4;
    cout << z << endl;
    z %= 5;
    cout << z << endl;

    cout << "Relational Operators:" << endl;
    int a = 7, b = 3;
    cout << (a > b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;

    cout << "Logical Operators:" << endl;
    bool t = true, f = false;
    cout << (t && f) << endl;
    cout << (t || f) << endl;
    cout << !t << endl;

    cout << "Bitwise Operators:" << endl;
    int i = 3;	// in bits: 0011
    int j = 9;	// in bits: 1001

    int k = i << 2;
    cout << k << endl;

    k = j >> 1;
    cout << k << endl;

    k = i | j;
    cout << k << endl;

    return;
}
