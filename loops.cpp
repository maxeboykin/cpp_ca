//
// Created by Max Boykin on 5/22/22.
//
#include <iostream>

void loopsLesson() {
    int fibonacci[5] = {0, 1, 1, 2, 3};
    for (auto number : fibonacci) {
        std::cout << number;
    }
    std::cout << std::endl;

    for (int i = 1; i <= 5; i++) {
        std::cout << i;
    }
    // while loop
    int count = 0;
    while (count <= 5) {
        std::cout << count;
        count++;
    }
    std::cout << "\n";

    // do-while loop
    int price = 300;
    do {
        std::cout << "Too expensive!";
    } while (price > 500);
    std::cout << "\n";

    // for loop
    for (int i = 0; i <= 5; i++) {
        std::cout << i;
    }
    std::cout << "\n";

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        std::cout << i;
    }
    return;
}
