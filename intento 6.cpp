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

    
    return 0;
}
