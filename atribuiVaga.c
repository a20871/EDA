#include "fonte.h"

void associaUtente(Hospital* inicio, char hosp, int n, char nome[], int d) {

	while ((inicio != NULL) && (inicio->id != hosp))
	{
		inicio = inicio->proximo;

		if (inicio != NULL) {
			Utente* novo = (Utente*)malloc(sizeof(Utente));
			if (novo != NULL) {
				novo->sns = n;
				novo->nome[20-1] = strcpy(novo->nome, nome);
				novo->dist1 = d;

				novo->proximo = inicio->lista;
				inicio->lista = novo;
			}
		}
	}


}