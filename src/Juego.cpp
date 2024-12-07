#include "Juego.h"
#include <iostream>
#include <conio.h>

Juego::Juego(): barraIzq(2), barraDer(79)
{
    this->puntajeIzq = 0;
    this->puntajeDer = 0;
}

void Juego::jugar(void)
{
    while(true)
    {
        system("cls");

        std::cout << "Puntaje: " << puntajeIzq;
        for(unsigned int i = 0; i < 60; i++)
            std::cout << " ";
        std::cout << "Puntaje: " << puntajeDer;
        std::cout << std::endl;

        this->pelota.mover();
        this->pelota.dibujar();
        this->barraDer.dibujar();
        this->barraIzq.dibujar();

        if(_kbhit())
        {
            char pressedKey = _getch();
            if(pressedKey == 'w')
                this->barraIzq.moverArriba();
            else if(pressedKey == 's')
                this->barraIzq.moverAbajo();
            else if(pressedKey == 'o')
                this->barraDer.moverArriba();
            else if(pressedKey == 'l')
                this->barraDer.moverAbajo();
        }

        if(this->pelota.posY==24 || this->pelota.posY==1)
        {
            this->pelota.rebotarY();
        }
        if(this->pelota.posX==80)
        {
            this->puntajeIzq++;
            this->pelota.reiniciar();
        }
        else if (this->pelota.posX==1)
        {
            this->puntajeDer++;
            this->pelota.reiniciar();
        }
        if(this->pelota.posX==this->barraDer.posX && this->pelota.posY>=this->barraDer.posY && this->pelota.posY < this->barraDer.posY+this->barraDer.largo)
        {
            this->pelota.rebotarX();
        }
        if(this->pelota.posX==this->barraIzq.posX && this->pelota.posY>=this->barraIzq.posY && this->pelota.posY < this->barraIzq.posY+this->barraIzq.largo)
        {
            this->pelota.rebotarX();
        }

        for(unsigned int i = 0; i < 20000000; i++);
    }
}
