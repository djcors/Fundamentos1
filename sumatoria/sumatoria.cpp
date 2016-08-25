#import <iostream>
using namespace std;

int main(){
    float n1,n2,total;
    cout << "Ingrese número 1\n";
    cin >> n1;
    cout << "Ingrese número 2\n";
    cin >> n2;
    total = (n1+n2)+(n1-n2)+(n1*n2)+(n1/n2);
    cout << "La sumatoria de los resultados de \n sumar, restar, multiplicar y dividir\n los numeros\n";
    cout << n1 << " y " << n2 << " Es: " << total << "\n";
    return 0;
}