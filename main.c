/*****************************************************************//**
 * \file   main.c
 * \brief  
 * 
 * \author J�ssica, Maria e S�rgio
 * \e-mail a20871@alunos.ipca.pt
 * \date   April 2021
 *********************************************************************/


#include"fonte.h"

Utente* atribVagas(Hospital* inicio, Utente* rejeitados) {

	while (inicio != NULL) {

		//Cria Utente* aux que guarda a posi��o do apontador enquanto se percorre a lista.
		Utente* aux = (Utente*)malloc(sizeof(Utente));
		if (aux != NULL) {
			aux = inicio->lista;

			int vagasH = inicio->vagas;
			int n = 0;

			//Percorre a lista de utentes at� atingir o limite de vagas ou chegar ao fim da lista
			while ((n < vagasH-1) && (inicio->lista != NULL)) {

				inicio->lista = inicio->lista->proximo;
				aux = aux->proximo;
				n++;
			}

			//atingido o limite de vagas, e n�o tendo chegado ao fim da lista, ou o pr�ximo n�o seja NULL,
			//verifica se a dist�ncia dos pr�ximos � igual ao �ltimo e se for avan�a at� n�o se verificar essa igualdade
			if ((inicio->lista != NULL) && (inicio->lista->proximo != NULL)) {
				while (inicio->lista->dist1 == inicio->lista->proximo->dist1) {
					inicio->lista = inicio->lista->proximo;
					aux = aux->proximo;

				}
				//o �ltimo utente fica a apontar para NULL, terminando a lista.
				inicio->lista->proximo = NULL;


				//Continua a percorrer a lista at� ao fim, passando os restantes para a lista de rejeitados
				while (aux != NULL) {

					rejeitados = inserirInicioUtente(rejeitados, aux->sns, aux->nome, aux->hosp1, aux->dist1, aux->hosp2, aux->dist2, aux->hosp3, aux->dist3, aux->hosp4, aux->dist4, aux->hosp5, aux->dist5);

					aux = aux->proximo;

				}
			}
			
		}
		else return inicio;

		inicio = inicio->proximo;
	}
	return rejeitados;
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

	Utente* deFora = NULL;

	deFora = atribVagas(hosp, deFora);

	listar(deFora);
	listarListas(hosp);

}
