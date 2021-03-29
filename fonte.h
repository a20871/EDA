#ifndef DADOS
#define DADOS

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#pragma warning (disable:4996)					/*Desativar erro "security warning"*/

typedef struct utente {
	int sns;
	char nome[20];
	char hosp1;
	int dist1;
	char hosp2;
	int dist2;
	char hosp3;
	int dist3;
	char hosp4;
	int dist4;
	char hosp5;
	int dist5;
	struct utente* proximo;
	
}Utente;


Utente* inserirInicioUtente(Utente* inicio, int numero, char n[], char h1, int d1, char h2, int d2, char h3, int d3, char h4, int d4, char h5, int d5);


Utente* leFicheiro(Utente* inicio);


void listar(Utente* inicio);


#endif // !DADOS
