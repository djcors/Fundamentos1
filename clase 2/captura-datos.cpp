#include <iostream>
#import <stdio.h>
using namespace std;
#include <cstdio>
#include <cmath>


//constantes
#define euler 2.17

// colores
#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
/*
    Profe uso los colores en esta forma porque compilo usando consola de MacOSX
*/

//variable global
int id;
char pwd[10];
int main(int argc, char *argv[]){
    /*
    printf("%c[1;31mIngrese id:\n", 140);
    scanf("%d",&id);
    printf("Ingrese clave:\n");
    scanf("%9s",pwd);
    printf("El usuario con identificacion %d\nha ingresado y la clave es %s\n", id, pwd);
    cout << "\nla tangente del id es:"<<tan(id);
    */
    cout << RED << "Identificacion:" << RESET;
    cin >> id;
    getchar();
    cout << BLUE << "Clave:" << RESET;
    gets(pwd);
    cout << "el usuario: "<< YELLOW <<id << RESET << CYAN <<"\ncon clave: "<<pwd<<"\nha iniciado" << RESET;
    return 0;
    
}