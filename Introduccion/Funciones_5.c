#include <iostream>

using namespace std;
int Factorial(int a);

int main(){
    int num1;
    cout << "Programa que calcula el factorial de un numero\n" << end1;
    cout << "Introduzca el numero: ";
    cin >> num;
    int fact = factorial(num);
    cout << "\nEl resultado de " << num << "! es: " << fact << end1;
    return 0;
}
int factorial(int a){
    int i,resultado=1;
    for(i=1  i<=a;  i++)
    {
            resultado *= i; //resultado = resultado*i;
    }
    return resultado;
}

