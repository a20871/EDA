#include "fonte.h"

//Apresenta lista de utentes inseridos na lista ligada que recebe por par�metro
void listar(Utente* inicio)
{
    Utente* u = inicio;
    while (u != NULL)
    {
        printf("%d\t%s\t%c\t%d\t%c\t%d\t%c\t%d\t%c\t%d\t%c\t%d\n", u->sns, u->nome, u->hosp1, u->dist1, u->hosp2, u->dist2, u->hosp3, u->dist3, u->hosp4, u->dist4, u->hosp5, u->dist5);
        u = u->proximo; 
    }
}

//Apresenta a lista de Hospitais inseridos na lista ligada que recebe por par�metro
void listarH(Hospital* inicio)
{
    Hospital* h = inicio;
    while (h != NULL)
    {
        printf("%c\t%-12s\t%d\n", h->id, h->nome, h->vagas);
        h = h->proximo;
        
    }
}


//Apresenta lista de utentes ligada a lista de hospitais
void listarListas(Hospital* inicio){

    Hospital* h = inicio;
    while (h != NULL)
    {
        printf("========================================\n");
        printf("%c\t%-12s\t%d vagas\n", h->id, h->nome, h->vagas);

        Utente* u = h->lista;
        while (u != NULL) {

                printf("%d\t%s\t%d\n", u->sns, u->nome, u->dist1);
                
            u = u->proximo;
        }
        h = h->proximo;
    }
}
