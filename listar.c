#include "fonte.h"


void listar(Utente* inicio)
{
	Utente* u = inicio;
	while (u != NULL)
	{
		printf("%d\t%s\t%c\t%d\t%c\t%d\t%c\t%d\t%c\t%d\t%c\t%d\n", u->sns, u->nome, u->hosp1, u->dist1, u->hosp2, u->dist2, u->hosp3, u->dist3, u->hosp4, u->dist4, u->hosp5, u->dist5);
		u = u->proximo;
	}
}


void listarH(Hospital* inicio)
{

	printf("ID\tNome Hospital\tVagas\n");
	Hospital* h = inicio;
	while (h != NULL)
	{
		printf("%c\t%-12s\t%d\n", h->id, h->nome, h->vagas);
		h = h->proximo;

	}
}



void listarListas(Hospital* inicio) {

	Hospital* h = inicio;
	while (h != NULL)
	{

		printf("========================================\n");
		printf("%c\t%-12s\t%d vagas\n", h->id, h->nome, h->vagas);
		Utente* u = h->lista;

		printf("SNS\tNome\tDist.\tColoc.\tAtrib.\n");
		while (u != NULL) {
			//corre a lista de utentes associada ao hospital 
			if (h->id == u->hosp1)
				printf("%d\t%s\t%d\t%c\t%s\n", u->sns, u->nome, u->dist1,u->preferencia, u->empate);

			else if (h->id == u->hosp2)
				printf("%d\t%s\t%d\t%c\t%s\n", u->sns, u->nome, u->dist2, u->preferencia, u->empate);

			else if (h->id == u->hosp3)
				printf("%d\t%s\t%d\t%c\t%s\n", u->sns, u->nome, u->dist3, u->preferencia, u->empate);
			else if (h->id == u->hosp4)

				printf("%d\t%s\t%d\t%c\t%s\n", u->sns, u->nome, u->dist4, u->preferencia, u->empate);
			else
				printf("%d\t%s\t%d\t%c\t%s\n", u->sns, u->nome, u->dist5, u->preferencia, u->empate);


			u = u->proximo;
		}
		h = h->proximo;
	}
}

//Apresenta a lista final de todos os utentes com as suas respetivas colocaçoes
//ou no caso de nao terem obtido colocaçao a mençao de "sem vaga"
void listarFinal(Utente* inicio)
{
	Utente* u = inicio;
	while (u != NULL)
	{
		printf("%d\t%s\t%c\t%d\t%c\t%d\t%c\t%d\t%c\t%d\t%c\t%d\t%c\t%s\n", u->sns, u->nome, u->hosp1, u->dist1, u->hosp2, u->dist2, u->hosp3, u->dist3, u->hosp4, u->dist4, u->hosp5, u->dist5, u->preferencia, u->empate);
		u = u->proximo;
	}
}