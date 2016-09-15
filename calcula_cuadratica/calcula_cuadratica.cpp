#include <iostream>
#include <cmath>

int main() {
  float A, B, C, aux1, aux2;
  std::cout << "Ingresa el valor de A: ";
  std::cin >> A;
  std::cout << "Ingresa el valor de B: ";
  std::cin >> B;
  std::cout << "Ingresa el valor de C: ";
  std::cin >> C;
  aux1 = pow(B,2) - 4 * A * C;
  aux2 = 2 * A;
  if (aux1 == 0) {
    std::cout << "X1 y X2 son igual a: " << -B/aux2;
  } else if (aux1 > 0) {
    std::cout << "X1=" << (-B + sqrt(aux1))/aux2 << std::endl;
    std::cout << "X2=" << (-B - sqrt(aux1))/aux2 << std::endl;
  } else {
    std::cout << "X1=" << -B / aux2 << "+" << sqrt(-aux1)/aux2 << "i" << std::endl;
    std::cout << "X2=" << -B / aux2 << "-" << sqrt(-aux1)/aux2 << "i" << std::endl;
  }
  return 0;
}
