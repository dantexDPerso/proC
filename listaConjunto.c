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
        conj->alfabeto = malloc(sizeof(strlen(alfabeto)));
      return conj;
}


Nodo * CrearNodo(Conjunto* conj){
        Nodo* nodo = (Nodo *)malloc(sizeof(Nodo));
        nodo->alfab.alfabeto = CrearCadena(strlen(conj->alfabeto));
        //strcpy(nodo->alfab.alfabeto,conj->alfabeto);
        //nodo->siguiente = NULL;
        return nodo;    
}