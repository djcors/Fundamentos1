#import <iostream>
using namespace std;

int main(){
    float dist, valor;
    cout << "Ingrese la distancian\n";
    cin >> dist;
    valor = dist * 900;
    if (dist > 1000){
        valor = valor * 0.7;
    }
    cout << "El total a pagar es: " << valor << endl;
}