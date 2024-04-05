#ifndef CELDA_H
#define CELDA_H
//Libreria que guarda los atributos y los prototipos de los metodos utilizados para crear y administrar las celdas de juego


class Celda
{
    public:
        Celda();
        Celda(int coordenadaX, int coordenadaY, bool estadoMina);
        int setCoordenadaX(int coordenadaX);
        int getCoordenadaX();
        int setCoordenadaY(int coordenadaY);
        int getCoordenadaY();
        bool setMina(bool estadoMina);
        bool getMina();
        //getmina recibe el estado de la mina
        bool setMinaDescubierta(bool minaDescubierta);
        bool getMinaDescubierta();
        //recibe las minas quienes descubrieron las minas
        void imprimirCelda();
        //no imprime nada
    protected:

    private:
        int coordenadaX, coordenadaY;
        //se utilizan esas dos coordenadas par atener ubicada en donde se encuentra la selda
        bool mina, minaDescubierta;
};

#endif // CELDA_H
