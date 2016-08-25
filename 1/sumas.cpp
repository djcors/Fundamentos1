#include <iostream>
#import <stdio.h>
using namespace std;
#include <cstdio>
#include <cmath>

//colores
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define MAGENTA "\033[35m"


int main(int argc, char *argv[]){
    int num1, num2, total;
    cout << "Ingrese el primer número\n";
    cin >> num1;
    cout << "Ingrese el segundo número\n";
    cin >> num2;
    total = num1+num2;
    cout << RED << "La suma de los dos números es igual a: " << MAGENTA << total << RESET << "\n";
}