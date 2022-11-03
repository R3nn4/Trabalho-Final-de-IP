#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pessoas.h"
#include "Grupos.h"
#include "Conversas.h"
#include "funcs_uteis.h"
#define SUCESSO 0

int main(int argc, char ** argv)
{
    FILE *pessoas = fopen("Pessoas.txt", "r");
    FILE *grupos = fopen("Grupos.txt", "r");
    FILE *conversas = fopen("Conversas.txt", "r");
    int choice, n_pessoas = 0, n_grupos = 0, n_conversas = 0;
    Pessoa *p = NULL;
    Grupo *g = NULL;
    Conversa *c = NULL;
    Mensagens **m = NULL;

    m = (Mensagens*)malloc(n_conversas * sizeof(Mensagens));

        cria_arquivos(pessoas, grupos, conversas);
        do{
            printf("\n\t\tOquerrr\n");
            imprime_traco();
            printf("\t1 - Pessoas\n\n\t2 - Grupos\n\n\t3 - Conversas\n\n\t4 - Sair do App\n> ");
            scanf("%d%*c", &choice);
            switch (choice)
            {
            case 4:                             //Voltar
                break;
            case 1:                             //Módulo de Pessoas
                p = mod_pessoa(p, &n_pessoas);  //passo como pointer para modificar em todo o programa
                break;
            case 2:                             //Módulo de Grupos
                g = mod_grupo(g, p, &n_grupos, n_pessoas);
                
                break;  
            case 3:

                break; 
            default:                    //Opção inválida
                break;
            }
        }while(choice != 4);
        free(p);
        free(g);
        printf("Backup feito com sucesso\n");
        printf("Saindo...");
    return SUCESSO;
}