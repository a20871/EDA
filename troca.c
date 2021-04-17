#include "fonte.h"

//procedimento que troca informação de dois apontadores do tipo utente
void troca(Utente* pre, Utente* pos) {

	Utente* temp = (Utente*)malloc(sizeof(Utente));

	if (temp != NULL) {

		//troca sns
		temp->sns = pre->sns;
		pre->sns = pos->sns;
		pos->sns = temp->sns;

		//troca nome
		temp->nome[19] = strcpy(temp->nome, pre->nome);
		pre->nome[19] = strcpy(pre->nome, pos->nome);
		pos->nome[19] = strcpy(pos->nome, temp->nome);


		//troca escolha 1
		temp->dist1 = pre->dist1;
		temp->hosp1 = pre->hosp1;
		pre->dist1 = pos->dist1;
		pre->hosp1 = pos->hosp1;
		pos->dist1 = temp->dist1;
		pos->hosp1 = temp->hosp1;

		//troca escolha 2
		temp->dist2 = pre->dist2;
		temp->hosp2 = pre->hosp2;
		pre->dist2 = pos->dist2;
		pre->hosp2 = pos->hosp2;
		pos->dist2 = temp->dist2;
		pos->hosp2 = temp->hosp2;

		//troca escolha 3
		temp->dist3 = pre->dist3;
		temp->hosp3 = pre->hosp3;
		pre->dist3 = pos->dist3;
		pre->hosp3 = pos->hosp3;
		pos->dist3 = temp->dist3;
		pos->hosp3 = temp->hosp3;

		//troca escolha 4
		temp->dist4 = pre->dist4;
		temp->hosp4 = pre->hosp4;
		pre->dist4 = pos->dist4;
		pre->hosp4 = pos->hosp4;
		pos->dist4 = temp->dist4;
		pos->hosp4 = temp->hosp4;

		//troca escolha 5
		temp->dist5 = pre->dist5;
		temp->hosp5 = pre->hosp5;
		pre->dist5 = pos->dist5;
		pre->hosp5 = pos->hosp5;
		pos->dist5 = temp->dist5;
		pos->hosp5 = temp->hosp5;
	}
}
