#include "fonte.h"


void associaUtente(Hospital* inicio, Utente* inicio2)
{
	//Percorre a lista de hospitais
	while (inicio != NULL)
	
	{
		//percorre a lista "aux" de utentes
		Utente* aux = inicio2;
		while (aux != NULL)
		{
			//ao encontrar um identificador de preferência de hospital igual ao do hospital que está em "inicio", copia a informação desse utente para o apontador "lista"
			if (inicio->id == aux->hosp1)
			{
				Utente* novo = (Utente*)malloc(sizeof(Utente));
				if (novo != NULL)
				{
					novo->sns = aux->sns;
					novo->nome[20 - 1] = strcpy(novo->nome, aux->nome);
					novo->dist1 = aux->dist1;
					novo->hosp1 = aux->hosp1;
					novo->dist2 = aux->dist2;
					novo->hosp2 = aux->hosp2;
					novo->dist3 = aux->dist3;
					novo->hosp3 = aux->hosp3;
					novo->dist4 = aux->dist4;
					novo->hosp4 = aux->hosp4;
					novo->dist5 = aux->dist5;
					novo->hosp5 = aux->hosp5;
					novo->proximo = inicio->lista;

					//Associa o "novo" à lista
					inicio->lista = novo;

				}

			}
			aux = aux->proximo;
		}
		inicio = inicio->proximo;
	}
}
