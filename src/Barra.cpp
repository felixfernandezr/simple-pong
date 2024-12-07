#include "Barra.h"
#include <iostream>
#include <windows.h>

Barra::Barra(unsigned int posX)
{
    this->posX = posX;
    this->posY = 4;
    this->largo = 8;
}

void Barra::mover(int direccion)
{
    if(direccion==-1 && this->posY >1 || direccion==1 && this->posY < 24 - this->largo)
    {
        this->posY += direccion;
    }
}
void Barra::moverArriba(void)
{
    this->mover(-1);
}

void Barra::moverAbajo(void)
{
    this->mover(+1);
}

void Barra::dibujar(void)
{
    for(unsigned int i=0; i< this->largo; i++)
    {
        HANDLE hcon;
        hcon = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD dwPos;
        dwPos.X = this->posX;
        dwPos.Y= this->posY + i;
        SetConsoleCursorPosition(hcon,dwPos);
        std::cout << '#';
    }
}
