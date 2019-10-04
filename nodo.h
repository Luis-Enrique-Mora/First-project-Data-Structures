#ifndef NODO_H
#define NODO_H
#include "aviones.h"
class Nodo
{
    private:
        Nodo *next;
        Nodo *previous;
        Aviones *avion;
    public:
        Nodo(Aviones *avion);

        void setNext(Nodo *next);
        void setPrevious(Nodo *previous);
        void setAvion(Aviones *avion);
        Nodo *getNext();
        Nodo *getPrevious();
        Aviones* getAvion();
};

#endif // NODO_H
