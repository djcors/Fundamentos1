#import <iostream>
using namespace std;

int main(){
    float b,h,area;
    cout << "Ingrese altura\n";
    cin >> b;
    cout << "Ingrese base\n";
    cin >> h;
    area = b*h/2;
    cout << "\nEl área es: " << area << "\n";
    return 0;
}