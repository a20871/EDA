/*****************************************************************//**
 * \file   main.c
 * \brief  
 * 
 * \author J�ssica, Maria e S�rgio
 * \e-mail a20871@alunos.ipca.pt
 * \date   April 2021
 *********************************************************************/


#include"fonte.h"

void atribVagas(Hospital* inicio) {

	//Percorre a lista de utentes atrivuidos a cada hospital, contabilizando cada itera��o
	//Quando o n�mero de itera��es for igual ao n�mero de Vagas, copia os utentes seguintes para nova lista;
	//Percorre a nova lista de utentes n�o colocados e verifica as op��es de prefer�ncia seguintes e dist�ncias.
		//Se a dist�ncia deste utente for inferior as dist�ncias de algum utente colocado, trocam com a fun��o troca.
		//Se for encontrado o H�spital Z nos utentes, avan�a para o utente seguinte.

	int vagasH = 0;
	int i = 0;

	vagasH = inicio->vagas;

	while (inicio->lista->proximo != NULL) {


	}
	for (i = 0; i < vagasH; i++) {

	}

}

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

	//Associa os utentes ao hospital da primeira prefer�ncia
	associaUtente(hosp, lista);

	//Apresenta a lista de hospitais com os utentes atribuidos na primeira prefer�ncia
	listarListas(hosp);


}
