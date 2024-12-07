#include <iostream>
#include <string>

using namespace std;

class Biblioteca {
private:
    string libros[25];
    bool prestados[25]; 
    string usuario;

public:
    Biblioteca() {
        
        libros[0] = "El principito";
        libros[1] = "El quijote";
        libros[2] = "La peste";
        libros[3] = "Cien años de soledad";
        libros[4] = "María";
        libros[5] = "La Santa Biblia";
        libros[6] = "El amor en tiempos de colera";
        libros[7] = "El olvido que seremos";
        libros[8] = "Delirio";
        libros[9] = "El ruido de las cosas al caer";
        libros[10] = "Satanás";
        libros[11] = "La vorágine";
        libros[12] = "La ciudad y los Perros";
        libros[13] = "El reino de este mundo";
        libros[14] = "La muerte de artemio cruz";
        libros[15] = "El Coronel no tiene quien le escriba";
        libros[16] = "La mala hora";
        libros[17] = "El otoño";
        libros[18] = "Cronica de una muerte anunciada";
        libros[19] = "Memorias de un hombre feliz";
        libros[20] = "El Patito feo";
        libros[21] = "Caperucita roja";
        libros[22] = "Los tres cerditos";
        libros[23] = "Rin Rin renacuajo";

        for (int i = 0; i < 25; i++) {
            prestados[i] = false;
        }
    }

    void registrar() {
        cout << "Ingrese su nombre: ";
        getline(cin, usuario);
        cout << "Registro exitoso. Bienvenido, " << usuario << "!" << endl;
    }

    void pedirPrestado() {
        if (usuario.empty()) {
            cout << "Por favor, regístrese primero." << endl;
            return;
        }

        cout << "Libros disponibles para prestar:" << endl;
        for (int i = 0; i < 25; i++) {
            if (!prestados[i]) {
                cout << i + 1 << ". " << libros[i] << endl;
            }
        }

        int opcion;
        cout << "Seleccione el número del libro que desea pedir prestado: ";
        cin >> opcion;
        cin.ignore();

        if (opcion < 1 || opcion > 25 || prestados[opcion - 1]) {
            cout << "Opción no válida o libro ya prestado." << endl;
        } else {
            prestados[opcion - 1] = true;
            cout << "Ha pedido prestado: " << libros[opcion - 1] << endl;
        }
    }

    void devolverLibro() {
        if (usuario.empty()) {
            cout << "Por favor, regístrese primero." << endl;
            return;
        }

        cout << "Libros que ha prestado:" << endl;
        for (int i = 0; i < 25; i++) {
            if (prestados[i]) {
                cout << i + 1 << ". " << libros[i] << endl;
            }
        }

        int opcion;
        cout << "Seleccione el número del libro que desea devolver: ";
        cin >> opcion;
        cin.ignore();

        if (opcion < 1 || opcion > 25 || !prestados[opcion - 1]) {
            cout << "Opción no válida o libro no prestado." << endl;
        } else {
            prestados[opcion - 1] = false;
            cout << "Ha devuelto: " << libros[opcion - 1] << endl;
        }
    }

    void menu() {
        int opcion;
        do {
            cout << "\n--- Menú de Biblioteca ---" << endl;
            cout << "1. Registrarse" << endl;
            cout << "2. Pedir prestado un libro" << endl;
            cout << "3. Devolver un libro" << endl;
            cout << "4. Salir" << endl;
            cout << "Seleccione una opción: ";
            cin >> opcion;
            cin.ignore();

            switch (opcion) {
                case 1:
                    registrar();
                    break;
                case 2:
                    pedirPrestado();
                    break;
                case 3:
                    devolverLibro();
                    break;
                case 4:
                    cout << "HASTA LUEGO VALLA CON DIOS, NO NOS VALLA A FARICEAR CON LA BIBLIOTECA DE LA ESQUINA VUELVA PRONTO" << endl;
                    break;
                default:
                    cout << "Intente de nuevo." << endl;
            }
        } while (opcion != 4);
    }
};

int main() {
    Biblioteca biblioteca;
    biblioteca.menu();
    return 0;
}
    Biblioteca biblioteca;
    biblioteca.menu();
    return 0;
}
