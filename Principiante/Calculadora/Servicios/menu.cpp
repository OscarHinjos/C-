#include <iostream>
using namespace std; 


int menu(){
    int opcion = 0; 
    cout << "1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n5.Salir" << endl; 
    cin >> opcion; 
    return opcion;
}