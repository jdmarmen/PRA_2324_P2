// main.cpp

#include <iostream>
#include <vector>
#include <string>
#include "DyV.h" // Asegúrate de que este nombre coincida con el nombre del archivo que contiene las funciones.

using namespace std;

int main() {
    // Ejemplo 1: Vector de enteros
    vector<int> vecInt = {5, 2, 9, 1, 5, 6};
    cout << "Vector de enteros original: ";
    for (int num : vecInt) cout << num << " ";
    cout << endl;

    // Ordenar usando QuickSort
    QuickSort(vecInt, 0, vecInt.size() - 1);
    cout << "Vector de enteros ordenado: ";
    for (int num : vecInt) cout << num << " ";
    cout << endl;

    // Buscar un valor en el vector ordenado
    int valorBuscado = 5;
    try {
        int indice = BusquedaBinaria(valorBuscado, vecInt, 0, vecInt.size() - 1);
        cout << "El valor " << valorBuscado << " se encuentra en el índice: " << indice << endl;
    } catch (const invalid_argument& e) {
        cout << e.what();
    }

    // Ejemplo 2: Vector de flotantes
    vector<float> vecFloat = {3.14f, 2.71f, 1.41f, 1.73f};
    cout << "\nVector de flotantes original: ";
    for (float num : vecFloat) cout << num << " ";
    cout << endl;

    // Ordenar usando QuickSort
    QuickSort(vecFloat, 0, vecFloat.size() - 1);
    cout << "Vector de flotantes ordenado: ";
    for (float num : vecFloat) cout << num << " ";
    cout << endl;

    // Buscar un valor en el vector ordenado
    float valorBuscadoFloat = 2.71f;
    try {
        int indice = BusquedaBinaria(valorBuscadoFloat, vecFloat, 0, vecFloat.size() - 1);
        cout << "El valor " << valorBuscadoFloat << " se encuentra en el índice: " << indice << endl;
    } catch (const invalid_argument& e) {
        cout << e.what();
    }

    // Ejemplo 3: Vector de cadenas
    vector<string> vecString = {"banana", "manzana", "kiwi", "cereza"};
    cout << "\nVector de cadenas original: ";
    for (const string& str : vecString) cout << str << " ";
    cout << endl;

    // Ordenar usando QuickSort
    QuickSort(vecString, 0, vecString.size() - 1);
    cout << "Vector de cadenas ordenado: ";
    for (const string& str : vecString) cout << str << " ";
    cout << endl;

    // Buscar un valor en el vector ordenado
    string valorBuscadoString = "kiwi";
    try {
        int indice = BusquedaBinaria(valorBuscadoString, vecString, 0, vecString.size() - 1);
        cout << "El valor \"" << valorBuscadoString << "\" se encuentra en el índice: " << indice << endl;
    } catch (const invalid_argument& e) {
        cout << e.what();
    }

    return 0;
}
