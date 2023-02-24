// Crear una calculadora básica que permita realizar operaciones aritméticas simples 
// (suma, resta, multiplicación y división) entre dos números ingresados por el usuario 
// a través de la consola. La calculadora debe mostrar el resultado en la pantalla y 
// permitir al usuario realizar más operaciones si lo desea.

#include "Servicios/entrada_datos.cpp"
#include "Servicios/menu.cpp"
#include "Servicios/operaciones.cpp"
using namespace std; 
int main(int argc, char const *argv[]){
    
    bool salir = false;
    while (salir == false){
        int opcion = menu();
        if(opcion == 1){
            float num1 = entrada_numeros(); 
            float num2 = entrada_numeros();
            cout << "La suma de " << num1 << " + " << num2  << " es: " <<suma(num1, num2) << endl;
        }else if(opcion == 2){
            float num1 = entrada_numeros(); 
            float num2 = entrada_numeros();
            cout << "La resta de " << num1 << " - " << num2  << " es: " <<resta(num1, num2) << endl;
        }else if(opcion == 3){
            float num1 = entrada_numeros(); 
            float num2 = entrada_numeros();
            cout << "La multiplicación de " << num1 << " x " << num2  << " es: " <<multi(num1, num2) << endl;
        }else if(opcion == 4){
            float num1 = entrada_numeros(); 
            float num2 = entrada_numeros();
            while (num2 == 0 || num2 < 0){
                cout << "Por favor, escoge un número distinto o mayor que cero" << endl; 
                cin >> num2;
            }
           cout << "La división de " << num1 << " / " << num2  << " es: " << divi(num1, num2) << endl;
        }else if(opcion == 5){
            cout << "Hasta pronto" << endl; 
            salir = true; 
        }
        
    }
    
    return 0;
}
