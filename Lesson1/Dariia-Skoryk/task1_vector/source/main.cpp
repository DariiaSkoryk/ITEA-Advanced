#include <QCoreApplication>
#include "main.h"

int main() {
    std::vector<int> vector1;
    std::vector<int> vector2;
    std::vector<int> resultVector;

    size_t capathity;
    std::cout << "Please, enter the capathity of first vector" << std::endl;
    std::cin >> capathity;
    fillVector(vector1, capathity);
    std::cout << "Please, enter the capathity of second vector" << std::endl;
    std::cin >> capathity;
    fillVector(vector2, capathity);

    std::cout << "Your first vector" << std::endl;
    printVector(vector1);
    std::cout << "Your second vector" << std::endl;
    printVector(vector2);

    resultVector = combineVectors(vector1.begin(), vector1.end(), vector2.begin(), vector2.end());
    std::cout << "Result" << std::endl;
    printVector(resultVector);

    return 0;
}
