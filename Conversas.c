#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Conversas.h"
#include "Pessoas.h"

#define TRUE 1 = 1
#define FALSE !TRUE

//As mensagens serão guardadas em um pointer pointer, em que cada posição do primeiro nivel representa uma mensagem
//e cada posição do segundo nível representa a conversa à qual pertencem as mensagens.
//Pra isso serve o ID das conversas: sincronizar cada conversa com seu respectivo pointer de mensagens.

int confere_validade_ID(Pessoa* pessoas, int num_conversas, int ID) { //função para conferir se os IDs fornecidos para
	int i = 0, valido = 0;											  //o cria_conversa são válidos

	for (i = 0; i <= num_conversas; i++) {
		if (ID == pessoas[i].id_p) {
			valido = TRUE;
			break;
		}
		else {
			valido = FALSE;
		}
	}

	return valido;
}

void cria_conversa(Conversa* conversa_pntr, Pessoa* pessoas, int num_conversaAtual) {
	
	conversa_pntr[num_conversaAtual].ID_conversa = num_conversaAtual; //identifica o ID da conversa, ou seja, a posição
																	  //da conversa no vetor de conversas 
	printf("\nInsira os IDs das duas pessoas que farao parte da conversa: ");
	
	//confere se os IDs fornecidos são válidos e mantém o usuário preso em um loop enquanto não forem
	do {
		scanf("%d", conversa_pntr[num_conversaAtual].ID_pessoa1);
	} while (confere_validade_ID(pessoas, num_conversaAtual, conversa_pntr[num_conversaAtual].ID_pessoa1) != TRUE);

	do {
		scanf("%d", conversa_pntr[num_conversaAtual].ID_pessoa2);
	} while (confere_validade_ID(pessoas, num_conversaAtual, conversa_pntr[num_conversaAtual].ID_pessoa2) != TRUE);

	conversa_pntr[num_conversaAtual].numMensagens = 0;
	conversa_pntr[num_conversaAtual].mensagens = (Mensagens**)malloc(num_conversaAtual * sizeof(Mensagens));

}

void abre_conversa(Conversa* conversa_pntr, Mensagens** mensagens, int ID_conversa) {
	int i = 0, opcao = 0;
	
	for (i = 0; i <= conversa_pntr[ID_conversa].numMensagens; i++) {
		if (mensagens[ID_conversa][i].valido_c == TRUE) {
			printf("%s", mensagens[ID_conversa][i].mensagem);
		}
	}

	printf("\n\n1 - Enviar mensagem \n2 - Apagar mensagem \n3 - Voltar\n\n");

	switch (opcao) {
	case 1: 

		break;
	case 2:

		break;
	}

}

void abre_grupo() {

}

void conversas(Pessoa * pessoas, Mensagens * mensagens, int * num_conversas) {
	int opcao = 0;
	Conversa* conversas_pntr;

	do {
		printf("\n\nConversas\n\n");
		printf("\n\n1 - Criar Conversa \n2 - Abrir Conversa \n3 - Abrir Grupo \n4 - Voltar para a sessao anterior");
		scanf("%d", opcao);

		switch (opcao) {
		case 1: 
			conversas_pntr = (Conversa*)realloc(*num_conversas + 1);
			mensagens = (Mensagens*)realloc(*num_conversas + 1);

			cria_conversa(conversas_pntr, pessoas, *num_conversas);
			(* num_conversas)++;
			break;

		case 2:

			abre_conversa();
			break;

		case 3:
			abre_grupo();
			break;
		}

	} while (opcao != 0);
}