//
// Created by Max Boykin on 5/22/22.
//

#include <iostream>
#include <string>

using namespace std;

void dataTypesLesson() {

    // int
    int length = 5;
    std::cout << length << std::endl;

    // double
    double pizza_price = 12.99;
    std::cout << pizza_price << std::endl;

    // Type conversion from double to int
    double x = 6.7;
    int y = (int) x;		// y is now 6
    std::cout << "After conversion, " << x << " becomes " << y << std::endl;

    // char
    char first_letter = 'a';
    std::cout << first_letter << std::endl;

    // string
    std::string word = "Code";
    std::cout << word << std::endl;

    // concatenation
    std::string name = word + "cademy";
    std::cout << name << std::endl;

    // char access
    std::cout << "The third letter of " << name << " is " << name[2] << std::endl;

    // string length
    std::cout << "There are " << name.length() << " letters in " << name << std::endl;

    // boolean
    bool a = true;
    a = false;
    std::cout << a;
    return;
}
