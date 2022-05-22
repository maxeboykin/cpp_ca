//
// Created by Max Boykin on 5/22/22.
//
#include <iostream>


double piggyBank() {
    std::string colombia = "Enter number of Colombian Pesos: ";
    std::string brazil = "Enter number of Brazilian Reais: ";
    std::string peru = "Enter number of Peruvian Soles: ";
    double pesos, reais, soles, dollars;
// Pesos conversion rate: 0.00032
// Reais conversion rate: 0.27
// Soles conversion rate: 0.3

    std::cout << colombia << std::endl;
    std::cin >> pesos;
    std::cout << brazil << std::endl;
    std::cin >> reais;
    std::cout << peru << std::endl;
    std::cin >> soles;

    double pesosConversion = 0.00032;
    double reaisConversion = 0.27;
    double solesConversion = 0.3;

    dollars = pesos * pesosConversion + reais * reaisConversion + soles * solesConversion;

    std::cout << "US Dollers = $" << dollars << std::endl;

}