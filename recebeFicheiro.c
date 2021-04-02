#include "fonte.h"


Utente* leFicheiro(Utente* inicio) {

	Utente* u = malloc(sizeof(Utente));

	FILE* listaEspera = fopen("utentes1.txt", "r");

	if (listaEspera == NULL) {
		printf("Erro ao ler ficheiro");
		return inicio;
	}
	else {
		while (!feof(listaEspera)) {

			fscanf(listaEspera, "%d\t%s\t%c\t%d\t%c\t%d\t%c\t%d\t%c\t%d\t%c\t%d\n", &u->sns, &u->nome, &u->hosp1, &u->dist1, &u->hosp2, &u->dist2, &u->hosp3, &u->dist3, &u->hosp4, &u->dist4, &u->hosp5, &u->dist5);
			inicio = inserirInicioUtente(inicio, u->sns, u->nome, u->hosp1, u->dist1, u->hosp2, u->dist2, u->hosp3, u->dist3, u->hosp4, u->dist4, u->hosp5, u->dist5);
		}
	}
	fclose(listaEspera);

	return inicio;
}

Hospital* leFicheiroH(Hospital* inicio) {

	Hospital* h = malloc(sizeof(Hospital));

	FILE* listaHospitais = fopen("hospitais.txt", "r");

	if (listaHospitais == NULL) {
		printf("Erro ao ler ficheiro");
		return inicio;
	}
	else {
		while (!feof(listaHospitais)) {

			fscanf(listaHospitais, "%c\t%[^\t]\t%d\n", &h->id, &h->nome, &h->vagas);
			inicio = inserirInicioHospital(inicio, h->id, h->nome, h->vagas);
		}
	}
	fclose(listaHospitais);

	inicio = novaListaInversa(inicio);

	return inicio;
}


