#pragma once

#include <QCoreApplication>
#include <iostream>
#include <list>

size_t getFirstNumber(size_t number) {
    while (number / 10 > 0) {
        number /= 10;
    }
    return number;
}

size_t getLastNumber(size_t number) {
    return number % 10;
}

size_t magicNumber(const size_t number, const size_t degree) {
    std::list<size_t> listOfNumbers;
    size_t value = 1, result = 0;
    for (size_t i = 0; i < degree; i++) {
        value *= number;
        listOfNumbers.push_back(getFirstNumber(value));
        listOfNumbers.push_back(getLastNumber(value));
    }

    for (const auto& entry : listOfNumbers) {
        result = result * 10 + entry;
        std::cout << entry;
    }
    std::cout << std::endl;
    return result;
}
