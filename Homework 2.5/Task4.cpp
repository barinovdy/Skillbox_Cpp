#include <iostream>

int main() {
    int overallSum = 4000000;
    int numEntrance = 10;
    int numFlats = 40;
    
    std::cout << "Приветствуем вас в калькуляторе квартплаты!";
    std::cout << "Введите сумму, указанную в квитанции: " << overallSum << "\n";
    std::cout << "Сколько подъездов в вашем доме? " << numEntrance << "\n";
    std::cout << "Сколько квартир в каждом подъезде? " << numFlats << "\n";
    std::cout << "----Считаем-----\n";
    std::cout << "Каждая квартира должна платить по " << overallSum / (numEntrance * numFlats) << " руб.";
}
 