#import <iostream>
using namespace std;

int main(){
    int num;
    cout << "Escriba un número entero\n";
    cin >> num;
    if (num > 0){
        cout << "El número es positivo\n";
    }
    else if (num < 0){
        cout << "El número es negativo\n";
    }
    else{
        cout << "El número es 0\n";
    }

}