#include "listaConjunto.h"
#include "conjunto.h"
#include <stdlib.h>
#include <string.h>



LisConjunto* CrearLista(LisConjunto* lista,Nodo* cabeza){
    lista = (LisConjunto*)malloc(sizeof(LisConjunto));
    lista->cabeza = cabeza;
    lista->longitud++;
    return lista;
}

Conjunto * CrearConjunto(char *alfabeto){
        Conjunto* conj = (Conjunto *)malloc(sizeof(Conjunto));
       
      return conj;
}

