#include <iostream>
using namespace std; 



float entrada_numeros(){
    float num = 0; 
    cout << "Escribe un número: " << endl; 
    cin >> num; 
    while (cin.fail()){
        cin.clear();
        cin.ignore(10000, '\n'); 
        cout << "Valor ingresado erroneo, intentelo de nuevo: " << endl; 
        cin >> num; 
    }
    
    return num;
}