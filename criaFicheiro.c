#include"fonte.h"



void criaTabelaFinal(Hospital* inicio, Utente* inicio2, char hospital)
{
	Hospital* hosp = inicio;
	Utente* utente = inicio2;
	FILE* tabela;
	FILE* tabela2;
	FILE* tabela3;
	FILE* tabela4;
	FILE* tabela5;
	FILE* tabelaAux;

	switch (hospital)
	{
	case 'A':
		tabela = fopen("Hospital_A.txt", "w");
		while (hosp != NULL)
		{
			if (hosp->id == hospital)
			{
				fprintf(tabela, "%c\t%s\t%d\n", hosp->id, hosp->nome, hosp->vagas);
				while (hosp->lista != NULL)
				{
					fprintf(tabela, "%d\t%s\t%d\t%c\t%s\n", hosp->lista->sns, hosp->lista->nome,
						hosp->lista->distFinal, hosp->lista->preferencia, hosp->lista->empate);
					hosp->lista = hosp->lista->proximo;

				}

			}hosp = hosp->proximo;
		}

		fclose(tabela);
		
		break;
	case 'B':
		tabela2 = fopen("Hospital_B.txt", "w");
		while (hosp != NULL)
		{
			if (hosp->id == hospital)
			{
				fprintf(tabela2, "%c\t%s\t%d\n", hosp->id, hosp->nome, hosp->vagas);
				while (hosp->lista != NULL)
				{
					fprintf(tabela2, "%d\t%s\t%d\t%c\t%s\n", hosp->lista->sns, hosp->lista->nome,
						hosp->lista->distFinal, hosp->lista->preferencia, hosp->lista->empate);
					hosp->lista = hosp->lista->proximo;

				}

			}hosp = hosp->proximo;
		}

		fclose(tabela2);
		
		break;
	case 'C':
		tabela3 = fopen("Hospital_C.txt", "w");
		while (hosp != NULL)
		{
			if (hosp->id == hospital)
			{
				fprintf(tabela3, "%c\t%s\tVagas:%d\n", hosp->id, hosp->nome, hosp->vagas);
				fprintf(tabela3, "SNS\tNome\tDist.\tColoc.\tAtrib.\n");
				while (hosp->lista != NULL)
				{
	
					fprintf(tabela3, "%d\t%s\t%d\t%c\t%s\n", hosp->lista->sns, hosp->lista->nome,
						hosp->lista->distFinal, hosp->lista->preferencia, hosp->lista->empate);
					hosp->lista = hosp->lista->proximo;

				}

			}hosp = hosp->proximo;
		}

		fclose(tabela3);
		
		break;
	case 'D':
		tabela4 = fopen("Hospital_D.txt", "w");
		while (hosp != NULL)
		{
			if (hosp->id == hospital)
			{
				fprintf(tabela4, "%c\t%s\t%d\n", hosp->id, hosp->nome, hosp->vagas);
				while (hosp->lista != NULL)
				{
					fprintf(tabela4, "%d\t%s\t%d\t%c\t%s\n", hosp->lista->sns, hosp->lista->nome,
						hosp->lista->distFinal, hosp->lista->preferencia, hosp->lista->empate);
					hosp->lista = hosp->lista->proximo;

				}

			}hosp = hosp->proximo;
		}

		fclose(tabela4);
		break;

	case 'E':
		tabela5 = fopen("Hospital_E.txt", "w");
		while (hosp != NULL)
		{
			if (hosp->id == hospital)
			{
				fprintf(tabela5, "%c\t%s\t%d\n", hosp->id, hosp->nome, hosp->vagas);
				while (hosp->lista != NULL)
				{
					fprintf(tabela5, "%d\t%s\t%d\t%c\t%s\n", hosp->lista->sns, hosp->lista->nome,
						hosp->lista->distFinal, hosp->lista->preferencia, hosp->lista->empate);
					hosp->lista = hosp->lista->proximo;

				}

			}hosp = hosp->proximo;
		}

		fclose(tabela5);
		break;

	default:
		printf("Nao foi possivel criar o ficheiro\n");
	}


}