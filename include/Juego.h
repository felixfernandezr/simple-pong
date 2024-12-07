#ifndef JUEGO_H
#define JUEGO_H

#include "Pelota.h"
#include "Barra.h"

class Juego
{
    public:
        Juego();
        Pelota pelota;
        Barra barraIzq;
        Barra barraDer;
        unsigned int puntajeIzq;
        unsigned int puntajeDer;

        void jugar(void);
};

#endif // JUEGO_H
