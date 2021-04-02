#include "fonte.h"

int main(){
	setlocale(LC_ALL, "");


	Utente* lista = NULL;
	lista=leFicheiro(lista);
	listar(lista);

	Hospital* hosp = NULL;
	hosp = leFicheiroH(hosp);
	listarH(hosp);

	associaUtente(hosp, lista);
	listarListas(hosp);
	
	//ordenaDistancia(hosp, a);
}
