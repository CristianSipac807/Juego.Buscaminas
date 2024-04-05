#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"

// este objeto es el que construye o inicia todo
class Juego
{
//se agregan los atributos en privado para que no se acceda a ellos
private:
	Tablero tablero;
	int cantidadMinas;
//sera la variable la cual se almacenan las minas
	int aleatorio_en_rango(int minimo, int maximo);
// aleatorioEnRango se utiliza para hacer un metodo para crear numeros aleatoriamente por medio de un rango min y max.
	int filaAleatoria();
//filaAleatoria se utiliza para indicar en donde estaran las minas, devuelve algo pero no recibe nada.
	int columnaAleatoria();
//columnaAleatoria para poder decidir en donde colocar las cosas al azar.

public:
    Juego(Tablero tablero, int cantidadMinas);
	void colocarMinasAleatoriamente();
//colocarMinasAleatoriamente se utiliza para poder ingresarle a las seldas una mina de forma aleatoria.
	int solicitarFilaUsuario();
//solicitarFilaUsuario se utiliza para saber en donde esta colocado el usuario.
	int solicitarColumnaUsuario();
//solicitarColumnaUsuario para encontrar en donde esta colocado el usuario.
	bool jugadorGana();
//evalua las condiciones para determinar si el usuario ya gano.
	void iniciar();
//iniciar es el que inicia  todo, no devuelve ningun valor.
	void dibujarPortada(string nombreArchivo);
};

#endif // JUEGO_H
