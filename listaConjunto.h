#ifndef listaConjunto_h
#define listaConjunto_h

#include <stdio.h>
#include "conjunto.h"

typedef struct Nodo{
   Conjunto alfab;
   struct Nodo * siguiente; 
}Nodo;

typedef struct LisConjunto{
    Nodo* cabeza;
    int longitud;
}LisConjunto;

Conjunto * CrearConjunto(char *);
LisConjunto * CrearLista(LisConjunto*,Nodo *);
Nodo * CrearNodo(Conjunto* );
#endif