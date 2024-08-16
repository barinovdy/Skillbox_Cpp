#include <iostream>

int main() {
  int workTime = 480;
  int orderTime = 2;
  int orderPack = 4;
  

  std::cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену.\n";
  std::cout << "Введите длительность смены в минутах: " << workTime << "\n";
  std::cout << "Сколько минут клиент делает заказ? " << orderTime << "\n";
  std::cout << "Сколько минут кассир собирает заказ? " << orderPack << "\n";
  std::cout << "-----Считаем-----\n";
  std::cout << "За смену длиной " << workTime << " минут кассир успеет обслужить " << workTime / (orderTime + orderPack) << " клиентов.";
}