/*****************************************************************//**
 * \file   main.c
 * \brief
 *
 * \author Jéssica Costa e Sérgio Martins
 * \e-mail a20871@alunos.ipca.pt e a20872@alunos.ipca.pt
 * \date   Abril 2021
 *********************************************************************/

#include"fonte.h"


	int main()
	{

		setlocale(LC_ALL, "");
		//Exercicio 1
		//Recebe ficheiro .txt de utentes e passa para lista ligada "lista".
		printf("Exercicio 1\n\n");
		Utente* lista = NULL;
		lista = leFicheiro(lista);
		printf("Lista de utentes obtida pelo ficheiro de texto\n");
		listar(lista);

		//Exercicio 2
		printf("\n\nExercicio 2\n\n");
		//Recebe ficheiro .txt de hospitais e passa para lista ligada "hosp".
		Hospital* hosp = NULL;
		hosp = leFicheiroH(hosp);
		printf("\n\n--------------------\n");
		printf("2)Lista de Hospitais contidos no ficheiro de texto\n\n");
		listarH(hosp);

		//Associa os utentes ao hospital da primeira preferência
		associaUtente(hosp, lista);
		//criou-se uma lista de utentes nao colocados no final da primeira ronda
		Utente* deFora = NULL;
		//lista é preenchida com os utentes não colocados após a primeira limitação de vagas
		deFora = atribVagas(hosp, deFora);
		
		//analise da 2ª preferencia dos rejeitados
		//criou-se uma lista de utentes nao colocados no final da segunda ronda
		Utente* deFora2 = NULL;
		//criou-se uma lista dos utentes que nao preencheram as restantes opçoes a 
		//partir da segunda preferencia
		Utente* naoPreenchido = NULL;
		naoPreenchido=utenteNaoPreenchido(deFora, naoPreenchido, 2);
		associaUtente2(hosp, deFora);
		deFora2 = atribVagas(hosp, deFora2);
		
		
		// analise da 3ª opcao
		//verifica-se se ha utentes que nao preencheram as preferencias
		//a partir da terceira preferencia e acrescenta-se estes a lista anterior
		naoPreenchido = utenteNaoPreenchido(deFora2, naoPreenchido, 3);
		associaUtente3(hosp, deFora2);
		//criou-se uma lista de utentes nao colocados no final da terceira ronda
		Utente* deFora3 = NULL;
		deFora3 = atribVagas(hosp, deFora3);
		
		
		//analise da 4ª opcao
		//verifica-se se ha utentes que nao preencheram as preferencias
		//a partir da quarta preferencia e acrescenta-se estes a lista anterior
		naoPreenchido = utenteNaoPreenchido(deFora3, naoPreenchido, 4);
		associaUtente4(hosp, deFora3);
		//criou-se uma lista de utentes nao colocados no final da quarta ronda
		Utente* deFora4 = NULL;
		deFora4 = atribVagas(hosp, deFora4);
		
		
		//analise da 5ª opcao
		//verifica-se se ha utentes que nao preencheram a quinta preferencia
		//e acrescenta-se estes a lista anterior
		naoPreenchido = utenteNaoPreenchido(deFora4, naoPreenchido, 5);
		associaUtente5(hosp, deFora4);
		//criou-se uma lista de utentes nao colocados no final da quinta ronda
		Utente* deFora5 = NULL;
		deFora5 = atribVagas(hosp, deFora5);
		printf("\n\n--------------------\n");
		printf("Lista de utentes colocados\n");
		listarListas(hosp);
		printf("\n\n--------------------\n");
		printf("Lista de utentes nao colocados\n");
		listar(deFora5);
		printf("\n\n--------------------\n");
		printf("Lista de utentes nao colocados por não terem preenchido todas as preferencias\n");
		listarFinal(naoPreenchido);
		
		//Exercicio 3
		printf("\n\nExercicio 3\n\n");
		//criou-se uma lista que contem os utentes colocados e nao colocados
		Utente* utentesFinal = NULL;
		utentesFinal=juntaListas(hosp, deFora5, naoPreenchido);
		associaUtenteNaoColocado(hosp,utentesFinal);
		printf("\n\n--------------------\n");
		printf("Lista dos utentes que escolheram um determinado hospital e respetiva colocaçao\n");
		listarListas(hosp);
		
		
		//criaçao de um ficheiro de texto para cada hospital passado por parametro
		printf("\n--------------------\n");
		criaTabelaFinal(hosp,deFora5,'A');
		criaTabelaFinal(hosp, deFora5, 'B'); 
		criaTabelaFinal(hosp, deFora5, 'C');
		criaTabelaFinal(hosp, deFora5,'D');
		criaTabelaFinal(hosp, deFora5, 'E');



	}
