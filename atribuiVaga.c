#include "fonte.h"


void associaUtente(Hospital* inicio, Utente* inicio2)
{
	//Percorre a lista de hospitais
	while (inicio != NULL)

	{
		//percorre a lista "aux" de utentes
		Utente* aux = inicio2;
		while (aux != NULL)
		{
			//ao encontrar um identificador de preferência de hospital igual ao do hospital que está em "inicio", copia a informação desse utente para o apontador "lista"

			if (inicio->id == aux->hosp1)
			{
				Utente* novo = (Utente*)malloc(sizeof(Utente));
				if (novo != NULL)
				{
					novo->sns = aux->sns;
					novo->nome[20 - 1] = strcpy(novo->nome, aux->nome);
					novo->dist1 = aux->dist1;
					novo->hosp1 = aux->hosp1;
					novo->dist2 = aux->dist2;
					novo->hosp2 = aux->hosp2;
					novo->dist3 = aux->dist3;
					novo->hosp3 = aux->hosp3;
					novo->dist4 = aux->dist4;
					novo->hosp4 = aux->hosp4;
					novo->dist5 = aux->dist5;
					novo->hosp5 = aux->hosp5;
					novo->preferencia = aux->hosp1; //atribui a letra 1ª preferencia
					novo->distFinal = aux->dist1;  //atribui a letra do H da primeira preferencia
					char situacao[20 - 1] = "Normal"; //inicialmente a colocação para todos é "Normal"
					novo->empate[20 - 1] = strcpy(novo->empate, situacao);
					novo->proximo = inicio->lista;

					//Associa o "novo" à lista do Hospital
					inicio->lista = novo;
				}
			}
			aux = aux->proximo;
		}
		inicio = inicio->proximo;
	}

}

void associaUtente2(Hospital* inicio, Utente* inicio2)
{
	//Percorre a lista de hospitais
	while (inicio != NULL)

	{
		//percorre a lista "aux" de utentes
		Utente* aux = inicio2;
		while (aux != NULL)
		{
			//ao encontrar um identificador de preferência de hospital igual ao do hospital que está em "inicio", copia a informação desse utente para o apontador "lista"
			if (inicio->id == aux->hosp2)
			{
				Utente* novo = (Utente*)malloc(sizeof(Utente));
				if (novo != NULL)
				{
					novo->sns = aux->sns;
					novo->nome[20 - 1] = strcpy(novo->nome, aux->nome);
					novo->dist1 = aux->dist1;
					novo->hosp1 = aux->hosp1;
					novo->dist2 = aux->dist2;
					novo->hosp2 = aux->hosp2;
					novo->dist3 = aux->dist3;
					novo->hosp3 = aux->hosp3;
					novo->dist4 = aux->dist4;
					novo->hosp4 = aux->hosp4;
					novo->dist5 = aux->dist5;
					novo->hosp5 = aux->hosp5;
					novo->preferencia = aux->hosp2;
					novo->distFinal = aux->dist2;
					char situacao[20 - 1] = "Normal";
					novo->empate[20 - 1] = strcpy(novo->empate, situacao);

					novo->proximo = inicio->lista;

					//Associa o "novo" à lista
					inicio->lista = novo;

				}

			}
			aux = aux->proximo;
		}
		inicio = inicio->proximo;
	}
}
void associaUtente3(Hospital* inicio, Utente* inicio2)
{
	//Percorre a lista de hospitais
	while (inicio != NULL)

	{
		//percorre a lista "aux" de utentes
		Utente* aux = inicio2;
		while (aux != NULL)
		{
			//ao encontrar um identificador de preferência de hospital igual ao do hospital que está em "inicio", copia a informação desse utente para o apontador "lista"
			if (inicio->id == aux->hosp3)
			{
				Utente* novo = (Utente*)malloc(sizeof(Utente));
				if (novo != NULL)
				{
					novo->sns = aux->sns;
					novo->nome[20 - 1] = strcpy(novo->nome, aux->nome);
					novo->dist1 = aux->dist1;
					novo->hosp1 = aux->hosp1;
					novo->dist2 = aux->dist2;
					novo->hosp2 = aux->hosp2;
					novo->dist3 = aux->dist3;
					novo->hosp3 = aux->hosp3;
					novo->dist4 = aux->dist4;
					novo->hosp4 = aux->hosp4;
					novo->dist5 = aux->dist5;
					novo->hosp5 = aux->hosp5;
					novo->distFinal = aux->dist3;
					novo->preferencia = aux->hosp3;
					char situacao[20 - 1] = "Normal";
					novo->empate[20 - 1] = strcpy(novo->empate, situacao);
					novo->proximo = inicio->lista;

					//Associa o "novo" à lista
					inicio->lista = novo;

				}

			}
			aux = aux->proximo;
		}
		inicio = inicio->proximo;
	}
}
void associaUtente4(Hospital* inicio, Utente* inicio2)
{
	//Percorre a lista de hospitais
	while (inicio != NULL)

	{
		//percorre a lista "aux" de utentes
		Utente* aux = inicio2;
		while (aux != NULL)
		{
			//ao encontrar um identificador de preferência de hospital igual ao do hospital que está em "inicio", copia a informação desse utente para o apontador "lista"
			if (inicio->id == aux->hosp4)
			{
				Utente* novo = (Utente*)malloc(sizeof(Utente));
				if (novo != NULL)
				{
					novo->sns = aux->sns;
					novo->nome[20 - 1] = strcpy(novo->nome, aux->nome);
					novo->dist1 = aux->dist1;
					novo->hosp1 = aux->hosp1;
					novo->dist2 = aux->dist2;
					novo->hosp2 = aux->hosp2;
					novo->dist3 = aux->dist3;
					novo->hosp3 = aux->hosp3;
					novo->dist4 = aux->dist4;
					novo->hosp4 = aux->hosp4;
					novo->dist5 = aux->dist5;
					novo->hosp5 = aux->hosp5;
					novo->distFinal = aux->dist4;
					novo->preferencia = aux->hosp4;
					char situacao[20 - 1] = "Normal";
					novo->empate[20 - 1] = strcpy(novo->empate, situacao);
					novo->proximo = inicio->lista;

					//Associa o "novo" à lista
					inicio->lista = novo;

				}

			}
			aux = aux->proximo;
		}
		inicio = inicio->proximo;
	}
}
void associaUtente5(Hospital* inicio, Utente* inicio2)
{
	//Percorre a lista de hospitais
	while (inicio != NULL)

	{
		//percorre a lista "aux" de utentes
		Utente* aux = inicio2;
		while (aux != NULL)
		{
			//ao encontrar um identificador de preferência de hospital igual ao do hospital que está em "inicio", copia a informação desse utente para o apontador "lista"
			if (inicio->id == aux->hosp5)
			{
				Utente* novo = (Utente*)malloc(sizeof(Utente));
				if (novo != NULL)
				{
					novo->sns = aux->sns;
					novo->nome[20 - 1] = strcpy(novo->nome, aux->nome);
					novo->dist1 = aux->dist1;
					novo->hosp1 = aux->hosp1;
					novo->dist2 = aux->dist2;
					novo->hosp2 = aux->hosp2;
					novo->dist3 = aux->dist3;
					novo->hosp3 = aux->hosp3;
					novo->dist4 = aux->dist4;
					novo->hosp4 = aux->hosp4;
					novo->dist5 = aux->dist5;
					novo->hosp5 = aux->hosp5;
					novo->distFinal = aux->dist5;
					novo->preferencia = aux->hosp5;
					char situacao[20 - 1] = "Normal";
					novo->empate[20 - 1] = strcpy(novo->empate, situacao);
					novo->proximo = inicio->lista;

					//Associa o "novo" à lista
					inicio->lista = novo;

				}

			}
			aux = aux->proximo;
		}
		inicio = inicio->proximo;
	}
}


Utente* atribVagas(Hospital* inicio, Utente* rejeitados)
{
	ordenar(inicio);
	while (inicio != NULL) 
	{

		//Cria Utente* aux que guarda a posição do apontador enquanto se percorre a lista.
		Utente* aux = (Utente*)malloc(sizeof(Utente));
		if (aux != NULL) {
			aux = inicio->lista;
			int vagasH = inicio->vagas;


			int n = 0; //variavel para contador de ciclos

			//Percorre a lista de utentes até atingir o limite de vagas ou chegar ao fim da lista
			while ((n < vagasH - 1) && (aux != NULL))
			{
				aux = aux->proximo;
				n++;
			}

			//verifica se é o último ou penúltimo utente da lista.
			if ((aux != NULL) && (aux->proximo != NULL))
			{
				//Se a distancia do utente atual é igual a do proximo acrescenta mais vagas até a distância ser diferente
				while ((aux->distFinal == aux->proximo->distFinal))
				{
					char palavra[20 - 1] = "Empate";
					aux->proximo->empate[20 - 1] = strcpy(aux->proximo->empate, palavra);

					//testa se os proximos dois utentes da lista sao nulos e se forem termina a funçao
					Utente* auxiliar = NULL;
					//avanca-se para o proximo utente da lista
					aux = aux->proximo;
					//a variavel auxiliar toma o valor do outro utente que vem a seguir
					auxiliar = aux->proximo;
					//se o utente for nulo o ciclo e forçado a terminar
					if (auxiliar == NULL)
						break;
				}

				Utente* temp = aux;//guarda-se o ultimo utente numa variavel temporaria
				aux = aux->proximo;//a variavel aux fica com o proximo utente da lista 
				temp->proximo = NULL;//o ultimo utente colocado fica a apontar para null 

			}
			else
				aux = NULL;
			

			//Continua a percorrer a lista até ao fim, passando os restantes para a lista de rejeitados
			while (aux != NULL) 
			{

				char vaga[20 - 1] = "Sem vaga";//define-se o tipo de vaga 
				char pref = 'Z';
				//atribuiu-se a letra z ao campo preferencia uma vez que o utente nao ficou colocado em nenhum dos outros hospitais
				aux->preferencia = pref;
				rejeitados = inserirInicioUtenteNaoColocado(rejeitados, aux->sns, aux->nome, aux->hosp1, aux->dist1, aux->hosp2, aux->dist2, aux->hosp3, aux->dist3, aux->hosp4, aux->dist4, aux->hosp5, aux->dist5, aux->distFinal, aux->preferencia, aux->empate);
				rejeitados->empate[20 - 1] = strcpy(rejeitados->empate, vaga);//atribui-se a designação sem vaga ao utente
				aux = aux->proximo;

			}
		}


		inicio = inicio->proximo;
	}
	return rejeitados;
}

void associaUtenteNaoColocado(Hospital* inicio, Utente* inicio2)
{
	ordenaNumeroUtente(inicio2);
	//Percorre a lista de hospitais
	while (inicio != NULL)

	{
		//percorre a lista final de utentes 
		Utente* aux = inicio2;
		while (aux != NULL)
		{
			//se o hospital for diferente daquele em que o utente foi colocado e corresponder
			//a alguma das preferencias do utente entao este utente e inserido no final da lista
			if ((inicio->id == aux->hosp1 || inicio->id == aux->hosp2 || inicio->id == aux->hosp3
				|| inicio->id == aux->hosp4 || inicio->id == aux->hosp5) && (aux->preferencia != inicio->id))
			{
				Utente* novo = inicio->lista;
				if (novo != NULL)
					novo = inserirFimUtente(novo, aux->sns, aux->nome, aux->hosp1, aux->dist1, aux->hosp2, aux->dist2, aux->hosp3, aux->dist3,
						aux->hosp4, aux->dist4, aux->hosp5, aux->dist5, aux->distFinal, aux->preferencia, aux->empate);

			}
			aux = aux->proximo;
		}
		inicio = inicio->proximo;
	}
}