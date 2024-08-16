#include <iostream>

int main() {
  int productPrice = 7800;
  int deliveryPrice = 450;
  int discount = 600;

  std::cout << "Стоимость товара: " << productPrice << "\n";
  std::cout << "Стоимость доставки: " << deliveryPrice << "\n";
  std::cout << "Стоимость скидки: " << discount << "\n";
  std::cout << "-----------\n";
  std::cout << "Итоговая стоимость: " << productPrice + deliveryPrice - discount;
}