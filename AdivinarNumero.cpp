#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Esto es para generar números aleatorios, es necesario para el juego.
    
    int intentos = 10, entrada, password; // Definimos las variables para los intentos, la entrada del jugador y el password para el modo dev.
    int numero = rand() % 100; // Número aleatorio entre 0 y 100 para que el jugador lo adivine.

    cout << "Adivina el número del 0 al 100" << endl << endl;

    // Le pedimos al jugador que ingrese el password para el DEVMODE. Esto es para que pueda ver el número si quiere hacer trampa.
    cout << "Introduce el password para DEVMODE (123456): ";
    cin >> password;
    
    if (password == 123456) { // Si el jugador pone el password correcto, le mostramos el número directamente. 
        cout << "DEVMODE: El número es: " << numero << endl;
    }

    // Bucle para que el jugador siga jugando hasta que se acaben los intentos o adivine el número.
    while (intentos > 0 && entrada != numero) {
        // Mostramos cuántos intentos quedan antes de cada intento.
        cout << "Tienes " << intentos << " intentos restantes." << endl;
        cout << "Ingrese su entrada: "; // Pedimos la entrada del jugador (el número que cree que es el correcto).
        cin >> entrada;
        
        if (entrada > numero) { // Si la entrada es mayor que el número, le decimos que es demasiado alto.
            cout << "X El número " << entrada << " es demasiado alto" << endl;
        } else if (entrada < numero) { // Si la entrada es menor que el número, le decimos que es demasiado bajo.
            cout << "X El número " << entrada << " es demasiado bajo" << endl;
        } else { // Si la entrada es igual al número, ¡el jugador ha ganado!
            cout << "INCREÍBLE!!! HAS ACERTADO!!!" << endl;
            return 0; // El juego termina cuando el jugador acierta.
        }

        intentos--; // Le restamos un intento al jugador cada vez que falla.
    }

    // Si se acaban los intentos y el jugador no ha acertado, mostramos el número correcto.
    if (entrada != numero) {
        cout << "Lo siento, se te acabaron los intentos. El número era: " << numero << endl;
    }

    return 0; // Fin del juego.
}
