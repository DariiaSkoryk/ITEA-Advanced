#pragma once
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

std::vector<int> combineVectors(std::vector<int>::iterator begin1, std::vector<int>::iterator end1, std::vector<int>::iterator begin2, std::vector<int>::iterator end2) {
    std::vector<int> resultVector(static_cast<unsigned int>(end1 - begin1 + end2 - begin2));
    std::copy(begin1, end1, resultVector.begin());
    std::copy(begin2, end2, resultVector.begin() + (end1 - begin1));
    return resultVector;
}

int generateNumber() {
    return rand() - RAND_MAX % 2;
}

void fillVector(std::vector<int>& vectorToFill, size_t capathity) {
    srand(static_cast<unsigned int>(time(nullptr)));
    vectorToFill.resize(capathity);
    vectorToFill.shrink_to_fit();
    std::generate(vectorToFill.begin(), vectorToFill.end(), generateNumber);
}

template<class T>
void printVector(const std::vector<T>& vectorToPrint) {
    for (const auto& entry : vectorToPrint) {
        std::cout << entry << ' ';
    }
    std::cout << std::endl;
}
