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
