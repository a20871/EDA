#include"fonte.h"
Utente* juntaListas(Hospital* lista1, Utente* lista2, Utente* lista3)
{
	Hospital* hosp = lista1;
	Utente* u = lista2;
	Utente* u2 = lista3;
	Utente* nova = NULL;
	while (hosp != NULL)
	{
		Utente* lista = hosp->lista;
		while (lista != NULL)

		{
			nova = inserirInicioUtenteNaoColocado(nova, lista->sns, lista->nome, lista->hosp1, lista->dist1, lista->hosp2, lista->dist2,
				lista->hosp3, lista->dist3, lista->hosp4, lista->dist4, lista->hosp5, lista->dist5, lista->distFinal, lista->preferencia, lista->empate);
			lista = lista->proximo;

		}hosp = hosp->proximo;
	}
	while (u != NULL)
	{
		nova = inserirInicioUtenteNaoColocado(nova, u->sns, u->nome, u->hosp1, u->dist1, u->hosp2, u->dist2,
			u->hosp3, u->dist3, u->hosp4, u->dist4, u->hosp5, u->dist5, u->distFinal, u->preferencia, u->empate);
		u = u->proximo;

	}
	while (u2 != NULL)
	{
		nova = inserirInicioUtenteNaoColocado(nova, u2->sns, u2->nome, u2->hosp1, u2->dist1, u2->hosp2, u2->dist2,
			u2->hosp3, u2->dist3, u2->hosp4, u2->dist4, u2->hosp5, u2->dist5, u2->distFinal, u2->preferencia, u2->empate);
		u2 = u2->proximo;

	}

	return nova;
}

Utente* utenteNaoPreenchido(Utente* inicio, Utente* inicio2, int pref)
{
	Utente* u = inicio;
	Utente* novo = inicio2;
	//Utente* novo = NULL;
	
		char opcao = 'Z';
		switch (pref)
		{
		case 1:
			break;
		case 2:
			while (u != NULL)
			{
				if (u->hosp2 == opcao)
				{
					novo = inserirInicioUtenteNaoColocado(novo, u->sns, u->nome, u->hosp1, u->dist1, u->hosp2, u->dist2,
						u->hosp3, u->dist3, u->hosp4, u->dist4, u->hosp5, u->dist5, u->distFinal, u->preferencia, u->empate);
				}u = u->proximo;
			}
			return novo;

			break;

		case 3:
			while (u != NULL)
			{
				if (u->hosp3 == opcao)
				{
					novo = inserirInicioUtenteNaoColocado(novo, u->sns, u->nome, u->hosp1, u->dist1, u->hosp2, u->dist2,
						u->hosp3, u->dist3, u->hosp4, u->dist4, u->hosp5, u->dist5, u->distFinal, u->preferencia, u->empate);
				}u = u->proximo;
			}
			return novo;
			break;

		case 4:
			while (u != NULL)
			{
				if (u->hosp4 == opcao)
				{
					novo = inserirInicioUtenteNaoColocado(novo, u->sns, u->nome, u->hosp1, u->dist1, u->hosp2, u->dist2,
						u->hosp3, u->dist3, u->hosp4, u->dist4, u->hosp5, u->dist5, u->distFinal, u->preferencia, u->empate);
				}u = u->proximo;
			}
			return novo;

		case 5:
			while (u != NULL)
			{
				if (u->hosp5 == opcao)
				{
					novo = inserirInicioUtenteNaoColocado(novo, u->sns, u->nome, u->hosp1, u->dist1, u->hosp2, u->dist2,
						u->hosp3, u->dist3, u->hosp4, u->dist4, u->hosp5, u->dist5, u->distFinal, u->preferencia, u->empate);
				}u = u->proximo;
			}
			return novo;
			break;
		default:
			printf("Erro\n");
			break;
		}
}
