#import <iostream>
using namespace std;

int main(){
    float num1, num2, num3;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercero número: ";
    cin >> num3;
    if ((num1 > num2) && (num1 > num3)){
        cout << num1 << " Es el número mayor" << endl;
    }
    else if(num2 > num3){
        cout << num2 << " Es el número mayor" << endl;
    }
    else{
        cout << num3 << " Es el número mayor" << endl;
    }
}