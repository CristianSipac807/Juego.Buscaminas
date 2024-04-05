#include <iostream>
//se inserta esta libreria para fucniones especiales del sistema
#include <unistd.h>
#include "Juego.h"
#include "Config.h"

using namespace std;

int main()
{
    //declarando todas las variables que se utilizaran
    const int FILASTABLERO = 5;
    const int COLUMNASTABLERO = 5;
    const int MINASENTABLERO = 3;
    const bool MODODESARROLLADOR = true;
    const int VIDASTABLERO = 3;
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);
    Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
    srand(getpid());
    int opciones;
    bool repetir = true;
    do
    {
        //se inicia la creacion del menu
        system("cls");
        //se usan saltos de linea para mejor presentacion del titulo
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        //dejar espacio para el menu
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Configuaracion del Juego" << endl;
        cout << "\t\t2. Iniciar el Juego" << endl;
        cout << "\t\t3. Salir del Juego" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
            {
                configuracionJuego.menuConfiguracion();
                break;
            }
        case 2:
            {
              	Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
                juegoTemporal.iniciar();

                system("pause");
                break;
            }
        case 3: repetir = false;
                break;
        }
    } while (repetir);
    system("cls");
    return 0;
}
