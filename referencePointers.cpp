//
// Created by Max Boykin on 5/22/22.
//

//
// Created by Max Boykin on 5/22/22.
//

#include <iostream>
#include <string>

using namespace std;

void referencePointersLesson() {
    int exam_grade = 85;
    int& score = exam_grade;

     //changing score will also change exam_grade
    score += 7;
    std::cout << exam_grade << std::endl;
    std::cout << score << std::endl;
    std::cout << &score << std::endl;

    // print the memory address of message
    std::string message = "Hello World!";
    std::cout << message << std::endl;
    std::cout << &message << std::endl;

    // https://www.codecademy.com/courses/c-plus-plus-for-programmers/articles/reference-and-pointers-cpp
    std::string name = "John";
    std::string* ptr = nullptr;

    ptr = &name;

    std::cout << ptr << '\n';
    std::cout << *ptr << '\n';

    *ptr = "Robin";

    std::cout << *ptr << '\n';
    std::cout << name << '\n';

    return;
}
