/*****************************************************************//**
 * \file   main.c
 * \brief  
 * 
 * \author Jéssica, Maria e Sérgio
 * \e-mail a20871@alunos.ipca.pt
 * \date   April 2021
 *********************************************************************/


#include"fonte.h"

void atribVagas(Hospital* inicio) {

	//Percorre a lista de utentes atrivuidos a cada hospital, contabilizando cada iteração
	//Quando o número de iterações for igual ao número de Vagas, copia os utentes seguintes para nova lista;
	//Percorre a nova lista de utentes não colocados e verifica as opções de preferência seguintes e distâncias.
		//Se a distância deste utente for inferior as distâncias de algum utente colocado, trocam com a função troca.
		//Se for encontrado o Hõspital Z nos utentes, avança para o utente seguinte.

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

	//Associa os utentes ao hospital da primeira preferência
	associaUtente(hosp, lista);

	//Apresenta a lista de hospitais com os utentes atribuidos na primeira preferência
	listarListas(hosp);


}
