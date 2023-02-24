#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std; 

int numero_aleatorio(){
   srand(time(0));
   return rand() % 101; 

}

int numero_usuario(){
   int num {0};
   cout << "Escoge un número: " << endl; 
   cin >> num;
   return num; 
}