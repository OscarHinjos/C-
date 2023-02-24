#include <vector>
#include <iostream>
#include <algorithm>
using namespace std; 

int pedir_num(){
    int n = 0; 
    cout << "Escribe tu nota: " << endl; 
    cin >> n; 
    while (n < 0){
        cin.clear(); 
        cin.ignore(10000, '\n'); 
        cout << "Valor ingresado no valido, intentalo de nuevo: " << endl; 
        cin >> n; 
    }
    while (cin.fail()){
        cin.clear(); 
        cin.ignore(10000, '\n'); 
        cout << "Valor ingresado no valido, intentalo de nuevo: " << endl; 
        cin >> n; 
    }
    return n;
}

int notas_ingresar(){
    int cant_notas = 0;
    cout << "Cuantas notas vas a ingresar: " << endl; 
    cin >> cant_notas;
    while (cant_notas < 0){
        cin.clear(); 
        cin.ignore(10000, '\n'); 
        cout << "Valor ingresado no valido, intentalo de nuevo: " << endl; 
        cin >> cant_notas; 
    }
    while (cin.fail()){
        cin.clear(); 
        cin.ignore(10000, '\n'); 
        cout << "Valor ingresado no valido, intentalo de nuevo: " << endl; 
        cin >> cant_notas; 
    }
    return cant_notas;
}

vector<int> definir_vector(){
    vector <int> notas_alumnos;
    int count = 0;
    int cant_notas = notas_ingresar();

    while (count < cant_notas){
        int nota_asignatura = pedir_num(); 
        notas_alumnos.push_back(nota_asignatura); 
        count++;
    }

    return notas_alumnos;
    
}

int sum_vector(vector<int> &vec){
    int sum_vec = 0; 
    for (auto &&nota : vec){
        sum_vec += nota;
    }
    return sum_vec;
    
}

float promedio_elementos(int sum_vector, vector<int> vec ){
    int count = 0; 
    for (auto &&notas : vec){
        count++;
    }
    return sum_vector / count;
    
}

int elemento_max(vector<int> vec){
    int max = 0;  
    for (auto &&nota : vec){
        if(max < nota){
            max = nota;
        }
    
    }
    return max;
    
}

int elemento_min(vector<int> vec){
    int min = vec.at(0);  
    for (auto &&nota : vec){
        if(min > nota){
            min = nota;
        }
    
    }
    return min;
}


void buscar_elemento(vector<int>vec, int nota){
    for (int i = 0; i < vec.size(); i++){
        if(vec[i] == nota){
            cout << "La nota: " << nota << " esta en la posición: " << i + 1 << endl;
        }
    }
    
}

int nota_a_buscar(){
    int n = 0; 
    cout <<"¿Que nota quieres buscar?" << endl; 
    cin >> n;
     while (cin.fail()){
        cin.clear(); 
        cin.ignore(10000, '\n'); 
        cout << "Valor ingresado no valido, intentalo de nuevo: " << endl; 
        cin >> n; 
    }
    return n;
}