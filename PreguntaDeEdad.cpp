#include <iostream>
using namespace std;

int main() {
    // Definimos la variable de edad
    int edad;
    
    // Mostramos el mensaje de edad
    cout << "Que onda pa' decime tu edad: ";
    
    // Guardamos el Input en una variable, que es "edad"
    cin >> edad;
    
    // Si edad es menor que 12 es un niño
    if (edad < 12) {
        cout << "Eres un niño!";
    // Si no si edad es mayor igual a 12 y menor igual que 22, es adolecente
    } else if (edad >= 12 && edad <= 22){
        cout << "Eres un adolecente!";
    // Si no si edad es mayor a 2 y menor igual que 60, es adulto
    } else if (edad > 22 && edad <= 60) {
        cout << "Eres un Adulto recto y derecho!";
    // En cualquier caso contrario será considerado un anciano
    } else {
        cout << "Eres un anciano!";
    };
    
    // Finalización
    return 0;
}
