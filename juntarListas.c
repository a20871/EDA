#include"fonte.h"


Utente* inserirElementoFim(Utente* inicio, int numero, char n[], char h1, int d1, char h2, int d2, char h3, int d3, char h4, int d4, char h5, int d5, int distFinal)
{
	Utente* aux = inicio;
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
		novo->distFinal = aux->distFinal;
		novo->proximo = NULL;
	}
	if (aux == NULL)
		return novo;
	else
	{
		while (aux->proximo != NULL)
			aux = aux->proximo;
		aux->proximo = novo;
		return(inicio);
	}
}

void associaUtenteSemVaga(Hospital* inicio, Utente* inicio2)
{
	Hospital* novo = inicio;
	//Percorre a lista de hospitais
	
		//percorre a lista "aux" de utentes
		Utente* aux = inicio2;
		while (novo != NULL)
		{
			while (aux != NULL)
			{
				//ao encontrar um identificador de preferência de hospital igual ao do hospital que está em "inicio", copia a informação desse utente para o apontador "lista"
				if (novo->id == aux->hosp1)
				{
				 novo->lista=inserirElementoFim(aux, aux->sns, aux->nome, aux->hosp1, aux->dist1,aux->hosp2, aux->dist2, aux->hosp3, aux->dist3,aux->hosp4, aux->dist4, aux->hosp5, aux->dist5, aux->distFinal);
					aux = aux->proximo;
				}
			}
			novo = novo->proximo;
		}
	
}


void associaUtenteFim(Hospital* inicio, Utente* inicio2)
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
					novo->preferencia = 1;
					novo->distFinal = aux->dist1;
					novo->proximo = NULL;

					//Associa o "novo" à lista
					inicio->lista = novo;

				}

			}
			aux = aux->proximo;
		}
		inicio = inicio->proximo;
	}
}