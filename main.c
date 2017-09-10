#include "listaConjunto.h"
#include "conjunto.h"
#include <stdlib.h>
#include <string.h>


char * CrearCadena(int);
void programa();

int main(int argc,char *argv[]){
	programa();
}

void programa(){
	char s[100];	
	printf("dame tu alfabeto : ");
	scanf("%s",s);
	printf("%s",s);

}
