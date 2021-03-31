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

typedef struct hospital {
	char id;
	char nome[50];
	int vagas;
	struct hospital* proximo;
	struct utente* lista;

}Hospital;

//Inserção de novo Utente na lista ligada
Utente* inserirInicioUtente(Utente* inicio, int numero, char n[], char h1, int d1, char h2, int d2, char h3, int d3, char h4, int d4, char h5, int d5);

//leitura da lista de utentes em fila de espera, transpondo para lista ligada
Utente* leFicheiro(Utente* inicio);

//mostra a lista de utentes
void listar(Utente* inicio);

//Inserção de Hospital na lista ligada
Hospital* inserirInicioHospital(Hospital* inicio, char letra, char n[], int limite);

//Leitura de ficheiro de texto de hospitais
Hospital* leFicheiroH(Hospital* inicio);

//mostra lista de hospitais
void listarH(Hospital* inicio);

//Associa um utente com sns "n", nome "nome[]", distancia "d" à lista "inicio" do hospital char"hosp"
//void associaUtente(Hospital* inicio, char hosp, int n, char nome[], int d);
Hospital* associaUtente(Hospital* inicio, Utente* inicio2, char nome);
//Hospital* ordenaDistancia(Hospital* inicio, char nome);

#endif // !DADOS
