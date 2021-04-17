#include "fonte.h"


void associaUtente(Hospital* inicio, Utente* inicio2)
{
	
	while (inicio != NULL)
	
	{
		Utente* aux = inicio2;
		while (aux != NULL)
		{

			if (inicio->id == aux->hosp1)
			{
				Utente* novo = (Utente*)malloc(sizeof(Utente));
				if (novo != NULL)
				{
					novo->sns = aux->sns;
					novo->nome[20 - 1] = strcpy(novo->nome, aux->nome);
					novo->dist1 = aux->dist1;

					novo->proximo = inicio->lista;
					inicio->lista = novo;

				}

			}
			aux = aux->proximo;
		}
		inicio = inicio->proximo;

	}
	
}


//void ordenar(Hospital* inicio) {
//
//	
//}







//Ainda nao esta a funcionar
//Hospital* ordenaDistancia(Hospital* inicio, char nome)
//{
//	Hospital* aux = (Hospital*)malloc(sizeof(Hospital));
//
//	while (inicio != NULL && inicio->id != nome)
//		inicio = inicio->proximo;
//
//	if (inicio != NULL)
//	{
//		Utente* ant = inicio->lista;
//		Utente* actual = inicio->lista;
//		while (ant != NULL && actual != NULL)
//		{
//			int aux;
//			if (ant->dist1 > actual->dist1)//ESTA A DAR ERRO
//			{
//				aux = ant->dist1;
//				ant->dist1 = actual->dist1;
//				actual->dist1 = aux;
//			}
//			ant = actual;
//			actual = actual->proximo;
//
//		}
//		return actual;
//	}
//}
