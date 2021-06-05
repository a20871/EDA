#include"fonte.h"


void ordenar(Hospital* u) {

	Hospital* h = u;
	while (h != NULL) {
	Utente* atual = h->lista;

		while (atual != NULL) {

			Utente* next = atual->proximo;

			while (next != NULL) {


				if (atual->distFinal > next->distFinal)
				{
					troca(atual, next);
				}

				next = next->proximo;
			}

			atual = atual->proximo;
		}
		h=h->proximo;
	}
}


void ordenaNumeroUtente(Utente* u) 
{

	Utente* atual = u;

	while (atual != NULL) {

		Utente* next = atual->proximo;

		while (next != NULL) {


			if (atual->sns > next->sns)
			{
				troca(atual, next);
			}

			next = next->proximo;
		}

		atual = atual->proximo;
	}

}