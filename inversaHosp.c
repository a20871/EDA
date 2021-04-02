#include "fonte.h"


Hospital* novaListaInversa(Hospital* inicio) {

	Hospital* aux = inicio;
	Hospital* nova = NULL;

	while (aux != NULL) {
		nova = inserirInicioHospital(nova, aux->id, aux->nome, aux->vagas);
		aux = aux->proximo;
	
	}

	return nova;
}
