#include "fonte.h"



Utente* inserirInicioUtente(Utente* inicio, int numero, char n[], char h1, int d1, char h2, int d2, char h3, int d3, char h4, int d4, char h5, int d5)
{
    Utente* novo = (Utente*)malloc(sizeof(Utente));
    if (novo != NULL)
    {
        novo->sns = numero;
        novo->nome[20] = strcpy(novo->nome, n);
        novo->hosp1 = h1;
        novo->dist1 = d1;
        novo->hosp2 = h2;
        novo->dist2 = d2;
        novo->hosp3 = h3;
        novo->dist3 = d3;
        novo->hosp4 = h4;
        novo->dist4 = d4;
        novo->hosp5 = h5;
        novo->dist5 = d5;
        novo->proximo = inicio;
        return(novo);
    }
    else return(inicio);
}