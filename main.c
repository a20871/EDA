/*****************************************************************//**
 * \file   main.c
 * \brief  
 * 
 * \author Jéssica, Maria e Sérgio
 * \e-mail a20871@alunos.ipca.pt
 * \date   April 2021
 *********************************************************************/


#include"fonte.h"


int main(){

	setlocale(LC_ALL, "");

	//Recebe ficheiro .txt de utentes e passa para lista ligada "lista".
	Utente* lista = NULL;
	lista=leFicheiro(lista);
	listar(lista);
	
	//Ordena a lista de utentes por ordem de distancia de preferencia 1
	ordenar(lista);
	printf("\n\n--------------------\n");
	listar (lista);
	
	//Recebe ficheiro .txt de hospitais e passa para lista ligada "hosp".
	Hospital* hosp = NULL;
	hosp = leFicheiroH(hosp);
	listarH(hosp);


	associaUtente(hosp, lista);

	listarListas(hosp);
}
