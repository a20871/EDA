#include "fonte.h"

//void associaUtente(Hospital* inicio, char hosp, int n, char nome[], int d) {
//
//	while ((inicio != NULL) && (inicio->id != hosp))
//	{
//		inicio = inicio->proximo;
//
//		if (inicio != NULL) {
//			Utente* novo = (Utente*)malloc(sizeof(Utente));
//			if (novo != NULL) {
//				novo->sns = n;
//				novo->nome[20-1] = strcpy(novo->nome, nome);
//				novo->dist1 = d;
//
//				novo->proximo = inicio->lista;
//				inicio->lista = novo;
//			}
//		}
//	}
//
//
//}
Hospital* associaUtente(Hospital* inicio, Utente* inicio2)
{
	while (inicio != NULL)
	{
		while (inicio2 != NULL)
		{

			if (inicio->id == inicio2->hosp1)
			{
				Utente* novo = (Utente*)malloc(sizeof(Utente));
				if (novo != NULL)
				{
					novo->sns = inicio2->sns;
					novo->nome[20 - 1] = strcpy(novo->nome, inicio2->nome);
					novo->dist1 = inicio2->dist1;

					novo->proximo = inicio->lista;
					inicio->lista = novo;

				}

			}inicio2 = inicio2->proximo;
		}
		inicio = inicio->proximo;
	}return inicio;
}

//Ainda nao esta a funcionar
/*Hospital* ordenaDistancia(Hospital* inicio, char nome)
{
	Hospital* aux = (Hospital*)malloc(sizeof(Hospital));

	while (inicio != NULL && inicio->id != nome)
		inicio = inicio->proximo;

	if (inicio != NULL)
	{
		Utente* ant = inicio->lista;
		Utente* actual = inicio->lista;
		while (ant != NULL && actual != NULL)
		{
			int aux;
			if (ant->dist1 > actual->dist1)//ESTA A DAR ERRO
			{
				aux = ant->dist1;
				ant->dist1 = actual->dist1;
				actual->dist1 = aux;
			}
			ant = actual;
			actual = actual->proximo;

		}
		return actual;
	}
}*/
