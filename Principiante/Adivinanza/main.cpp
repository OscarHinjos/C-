#include "Services/numeros.cpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int num_aleatorio = numero_aleatorio(); 
    int vidas = 8; 
    bool salir = false;
    cout << num_aleatorio << endl;
    while (salir == false){
        int num_user = numero_usuario();
       
        if(vidas >= 1){
            if(num_user > num_aleatorio){
                cout << "El número es mas pequeño." << endl;
                vidas--;
            }else if(num_user < num_aleatorio){
                cout << "El número es mas grande." << endl; 
                vidas--;
            }else if(num_user == num_aleatorio){
                cout << "Enorabuena has acertado el número secreto te han sobrado: " << vidas << " vidas" << endl;
                salir = true;
            }
        }else{
            cout << "Lo siento has perdido" << endl; 
            salir = true;
        }
        cout << "Te quedan: " << vidas << " vidas" << endl;
    }
    
    return 0;
}
