#import <iostream>
using namespace std;

int main(){
    float presupuesto, gine,pedi,trau;
    cout << "Ingrese presupuesto\n";
    cin >> presupuesto;
    gine = presupuesto*0.4;
    pedi = presupuesto*0.3;
    trau = presupuesto*0.3;
    cout << "El presupuesto para Ginecología es: " << gine << "\n";
    cout << "El presupuesto para Pediatría es: " << pedi << "\n";
    cout << "El presupuesto para Traumatología es: " << trau << "\n";
    return 0;
}