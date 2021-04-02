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
    Hospital* h = inicio;
    while (h != NULL)
    {
        printf("%c\t%-12s\t%d\n", h->id, h->nome, h->vagas);
        h = h->proximo;

    }

}

void listarListas(Hospital* inicio){

    Hospital* h = inicio;
    while (h != NULL)
    {
        printf("%c\t%-12s\t%d\n", h->id, h->nome, h->vagas);
        while (h->lista->proximo != NULL) {
            printf("%d\t%s\t%d\n",h->lista->sns, h->lista->nome, h->lista->dist1);
            h->lista = h->lista->proximo;
        }

        h = h->proximo;


    }


}
