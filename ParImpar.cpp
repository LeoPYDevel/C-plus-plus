#include <iostream>
using namespace std;

int main() {
    // Definimos el número par o impar
    int numeroParImpar;
    
    // Imprimimos el mensaje para pedir el número
    cout << "Ingrese su número: ";
    
    // Pedimos que ingrese el número y lo guardamos en "numeroParImpar"
    cin >> numeroParImpar;
    
    // Si el modulo de 2 con numeroParImpar es 1, es impar
    if (numeroParImpar % 2 == 1) {
        cout << "El número es impar!";
    // Si no, es un par, sin duda
    } else {
        cout << "El número es par!";
    };
    
    // Finalizamos el programa
    return 0;
}
