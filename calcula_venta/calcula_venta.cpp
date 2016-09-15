#include <iostream>

int main() {
  float valor;
  int fPago;
  std::cout << "Ingrese la forma de pago: " << std::endl;
  std::cout << "\t0) Efectivo" << std::endl;
  std::cout << "\t1) Credito" << std::endl;
  std::cin >> fPago;
  std::cout << "Ingrese el valor del producto: ";
  std::cin >> valor;
  if (fPago == 0) {
    if (valor <= 1000000) {
      valor = valor - (valor * 0.09);
    } else if (valor <= 200000) {
      valor = valor - (valor * 0.15);
    } else if (valor > 200000) {
      valor = valor - (valor * 0.25);
    }
  } else if (fPago == 1) {
    if (valor <= 1000000) {
      valor = valor - (valor * 0.05);
    } else if (valor <= 200000) {
      valor = valor - (valor * 0.10);
    } else if (valor > 200000) {
      valor = valor - (valor * 0.20);
    }
  }
  std::cout << "Total a pagar: " << valor << std::endl;
  return 0;
}
