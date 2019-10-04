#include "aviones.h"

Aviones::Aviones(int id)
{
    this->id= id;
}

int Aviones::getId()
{
    return this->id;
}

void Aviones::setId(int id)
{
    this->id = id;
}
