#include "fonte.h"

int main(){
	setlocale(LC_ALL, "");


	Utente* lista = NULL;

	lista=leFicheiro(lista);

	listar(lista);


}
