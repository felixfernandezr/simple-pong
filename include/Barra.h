#ifndef BARRA_H
#define BARRA_H


class Barra
{
    public:
        Barra(unsigned int posX);
        unsigned int posX;
        unsigned int posY;
        unsigned int largo;

        void mover(int direccion);
        void moverArriba(void);
        void moverAbajo(void);
        void dibujar(void);
};

#endif // BARRA_H
