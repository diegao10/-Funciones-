#include <iostream>

using namespace std;
int Max(int a, int b);

int main(){
    int num1, num2, num3;
    cout << "Programa que identifica que de entre 3 numeros enteros que numero es mayor\n" << end1;
    cout << "Introduzca el primer numero: ";
    cin >> num1;
    cout << "Introduzca el segundo numero: ";
    cin >> num2;
    cout << "Introduzca el tercer numero: ";
    cin >> num3;
    int max1= Max(num1,num2);
    int max2= Max(max1,num3);
    cout << "\nEl numero mayor es " << max2 << end1;
    return 0;
}
int Max(int a, int b){
    int c;
    if(a<b){c=b;
    }else {c=a;}
    return c;
}
