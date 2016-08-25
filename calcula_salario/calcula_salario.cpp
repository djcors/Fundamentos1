#import <iostream>
using namespace std;

int main(){
    float sbase, v1,v2,v3,comision,neto, retencion;
    cout << "Ingrese salario base\n";
    cin >> sbase;
    cout << "Ingrese valor venta 1\n";
    cin >> v1;
    cout << "Ingrese valor venta 2\n";
    cin >> v2;
    cout << "Ingrese valor venta 3\n";
    cin >> v3;
    comision = (v1+v2+v3)*0.1;
    cout << "La comisión es de: \n" << comision << "\n";
    retencion = sbase*0.02;
    neto = sbase+comision-retencion;
    cout << "El salario neto es de: \n" << neto << "\n";
    return 0;
}