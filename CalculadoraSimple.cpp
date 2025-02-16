#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	// Definimos las variables necesarias
	double Numero1, Numero2; // Almacenan los números que ingresará el usuario
	char Operacion; // Almacena el tipo de operación a realizar
	
	// Pedimos al usuario que ingrese el primer número
	cout << "Ingrese el primer número: ";
	cin >> Numero1;

	// Pedimos al usuario que ingrese el segundo número
	cout << "Ingrese el segundo número: ";
	cin >> Numero2;
	
	// Pedimos la operación que se quiere realizar
	cout << "Ingrese la operación (+, -, *, /): ";
	cin >> Operacion;
	
	// Formateamos la salida a 2 decimales
	cout << fixed << setprecision(2);
	
	// Verificamos qué operación se ingresó y realizamos la correspondiente
	if (Operacion == '+') {
		cout << "El resultado de " << Numero1 << " " << Operacion << " " << Numero2 << " Da: " << Numero1 + Numero2;
		
	// Si no, verificamos si es una resta
	} else if (Operacion == '-') {
		cout << "El resultado de " << Numero1 << " " << Operacion << " " << Numero2 << " Da: " << Numero1 - Numero2;
		
	// Si no, verificamos si es una multiplicación
	} else if (Operacion == '*') {
		cout << "El resultado de " << Numero1 << " " << Operacion << " " << Numero2 << " Da: " << Numero1 * Numero2;
		
	// Si no, verificamos si es una división
	} else if (Operacion == '/') {
		// Si el divisor es 0, mostramos un mensaje de error
		if (Numero2 == 0) {
			cout << "No se puede dividir entre cero.";
			return -1;
		}
		
		// Si no hay error, realizamos la división
		cout << "El resultado de " << Numero1 << " " << Operacion << " " << Numero2 << " Da: " << Numero1 / Numero2;
		
	// Si la operación ingresada no es válida, mostramos un mensaje de error
	} else {
		cout << "Operación no válida.";
	}
	
	// Finalización
	return 0;
}
