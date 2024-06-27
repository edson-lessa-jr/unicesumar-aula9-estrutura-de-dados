#include <stdio.h>
#include "01_grafo/grafo.h"
#include "02_busca_dfs/busca-profundidade.h"

int main(void) {
    int opcao;

    printf("Iniciando o programa\n");

    do {
        // Exibindo o menu de opções
        printf("\nMenu:\n");
        printf("1. Exemplo Matriz Adjacente\n");
        printf("2. Exemplo Problema Caverna\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Verificando a opção escolhida e chamando a função correspondente
        switch (opcao) {
            case 1:
                iniciaGrafo();
                break;
            case 2:
                menu();
                break;

            case 0:
                printf("Saindo do programa. Obrigado!\n");
                break;
            default:
                printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
        }
    } while (opcao != 0);

    return 0;
}
