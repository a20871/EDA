#include"fonte.h"


void ordenar(Utente* u) {

	Utente* atual = u;

	while (atual != NULL) {

		Utente* next = atual->proximo;

		while (next != NULL) {

			if (atual->dist1 < next->dist1) {

				troca(atual, next);
			}

			next = next->proximo;
		}

		atual = atual->proximo;
	}

}
