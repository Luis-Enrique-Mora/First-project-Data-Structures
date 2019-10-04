#include "nodo.h"

Nodo::Nodo(Aviones *avion)
{
    this->avion = avion;
}

void Nodo::setNext(Nodo *next)
{
    this->next = next;
}

void Nodo::setPrevious(Nodo *previous)
{
    this->previous = previous;
}

void Nodo::setAvion(Aviones *avion)
{
    this->avion = avion;
}
Nodo* Nodo::getNext()
{
   return this->next;
}

Nodo* Nodo::getPrevious()
{
    return this->previous;
}

Aviones* Nodo::getAvion()
{
    return this->avion;
}

