/*****************************************************************//**
 * \file   fonte.h
 * \brief  
 * 
 * \author Jéssica Costa e Sérgio Martins
 * \date   Abril 2021
 *********************************************************************/
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
	char preferencia; //variavel que armazena a preferencia que lhe foi atribuida
	int distFinal; //distancia correspondente ao hospital que lhe foi atribuido
	char empate[20]; //a variavel designa o tipo de colocaçao: normal/sem vaga/empate
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

//criaçao de uma nova lista com os resltados finais de colocação
Utente* inserirInicioUtenteNaoColocado(Utente* inicio, int numero, char n[], char h1, int d1, char h2, int d2, char h3, int d3, char h4, int d4, char h5, int d5, int distFinal, char preferencia, char empate[]);

//leitura do ficheiro de texto com a lista de utentes em fila de espera, transpondo para lista ligada
Utente* leFicheiro(Utente* inicio);

//Apresenta lista de utentes inseridos na lista ligada que recebe por parâmetro
void listar(Utente* inicio);

//Inserção de Hospital na lista ligada
Hospital* inserirInicioHospital(Hospital* inicio, char letra, char n[], int limite);

//Leitura de ficheiro de texto de hospitais
Hospital* leFicheiroH(Hospital* inicio);

//Apresenta a lista de Hospitais inseridos na lista ligada que recebe por parâmetro
void listarH(Hospital* inicio);

//Atribui cada utente ao Hospital da sua primeira prioridade
void associaUtente(Hospital* inicio, Utente* inicio2);

//Apresenta a lista de todos os utentes que escolheram um determinado hospital
void listarListas(Hospital* inicio);


//Inverte ordem dos Hospitais
Hospital* novaListaInversa(Hospital* inicio);

//procedimento que troca informação de dois apontadores do tipo utente
void troca(Utente* pre, Utente* pos);

//procedimento que ordena utentes por ordem crescente de distância
void ordenar(Hospital* u);

//procedimento que ordena utentes por ordem crescente de numero de utente
void ordenaNumeroUtente(Utente* u);
//Funçao que consoante o numero de vagas do hospital, atribui vagas aos utentes
//com menor distancia e insere numa lista os utentes que nao conseguiram vaga
Utente* atribVagas(Hospital* inicio, Utente* rejeitados);

//Atribui cada utente, da lista dos utentes nao colocados, ao Hospital da sua segunda preferencia
void associaUtente2(Hospital* inicio, Utente* inicio2);

//Atribui cada utente, da lista dos utentes nao colocados, ao Hospital da sua terceira preferencia
void associaUtente3(Hospital* inicio, Utente* inicio2);

//Atribui cada utente, da lista dos utentes nao colocados, ao Hospital da sua quarta preferencia
void associaUtente4(Hospital* inicio, Utente* inicio2);

//Atribui cada utente, da lista dos utentes nao colocados, ao Hospital da sua quinta preferencia
void associaUtente5(Hospital* inicio, Utente* inicio2);

//Mostra uma lista dos utentes com as suas colocações  
void listarFinal(Utente* inicio);

//Associa os utentes colocados e nao colocados aos hospitais
void associaUtenteNaoColocado(Hospital* inicio, Utente* inicio2);

//junta as listas dos utentes colocados, dos utentes da lista de rejeitados e dos que nao preencheram todas as opçoes
Utente* juntaListas(Hospital* lista1, Utente* lista2, Utente* lista3);

//Cria um ficheiro com uma tabela de acordo com o hospital que for passado por parametro
void criaTabelaFinal(Hospital* inicio, Utente* inicio2, char hospital);

//Insere o utente na posição final da lista
Utente* inserirFimUtente(Utente* inicio, int numero, char n[], char h1, int d1, char h2, int d2, char h3, int d3, char h4, int d4, char h5, int d5, int distFinal, char preferencia, char empate[]);

//Cria uma lista dos utentes que nao preencheram todas as opçoes de preferencia
Utente* utenteNaoPreenchido(Utente* inicio, Utente* inicio2, int pref);




#endif // !DADOS
