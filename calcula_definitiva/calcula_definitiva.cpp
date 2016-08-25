#import <iostream>
using namespace std;

int main(){
    float ns, np1, np2, lab, def;
    cout << "Ingrese nota seguimiento\n";
    cin >> ns;
    cout << "Ingrese nota parcial 1\n";
    cin >> np1;
    cout << "Ingrese nota laboratorios\n";
    cin >> lab;
    cout << "Ingrese nota parcial 2\n";
    cin >> np2;
    def = (ns*0.4)+(np1*0.2)+(lab*0.1)+(np2*0.3);
    cout << "Su nota definitiva es: " << def << "\n";
    return 0;
}