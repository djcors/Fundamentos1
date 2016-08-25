#import <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    float area, apinos,abambu;
    int npinos, nbambu;
    cout << "Ingrese el area total\n";
    cin >> area;
    apinos = (int)area*0.35;
    abambu = (int)area*0.65;
    npinos = (apinos*4)/10;
    nbambu = (abambu*5)/15;
    cout << "El número de pinos es: " << npinos << "\n";
    cout << "El número de bambu es: " << nbambu << "\n";
    return 0;
}