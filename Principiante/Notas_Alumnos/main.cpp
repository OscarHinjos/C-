#include "Services/utils.cpp"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 


int main(int argc, char const5 *argv[]){
    vector <int> notas_alumnos =  definir_vector();
    cout << "La suma de todas tus notas es: " << sum_vector(notas_alumnos) << endl;
    cout << "El promedio de todas tus notas es: " << promedio_elementos(sum_vector(notas_alumnos), notas_alumnos) << endl;
    cout << "La nota mas alta es: " << elemento_max(notas_alumnos) << endl;
    cout << "La nota mas baja es: " << elemento_min(notas_alumnos) << endl;
    sort(notas_alumnos.begin(), notas_alumnos.end());
    cout << "Las notas ordenadas de menor a mayor son: "  << endl;
    for (auto &&nota : notas_alumnos){
        cout << nota << "|";
    }
    cout << endl;
    buscar_elemento(notas_alumnos, nota_a_buscar());
    return 0;
}
