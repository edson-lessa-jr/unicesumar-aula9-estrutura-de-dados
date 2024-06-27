#include "busca-profundidade.h"

void inicializarSistemaCavernas(int cavernas[NUM_CAVERNAS][NUM_CAVERNAS], int numCavernas) {
    for (int i = 0; i < numCavernas; i++) { // Itera sobre as linhas da matriz de adjacencia
        for (int j = 0; j < numCavernas; j++) { // Itera sobre as colunas da matriz de adjacencia
            cavernas[i][j] = 0; // Inicializa cada entrada da matriz com 0 (sem passagem)
        }
    }
}

void adicionarPassagem(int cavernas[NUM_CAVERNAS][NUM_CAVERNAS], int origem, int destino) {
    cavernas[origem][destino] = 1; // Define a entrada (origem, destino) como 1 (existe uma passagem)
    cavernas[destino][origem] = 1; // Adiciona tambem a passagem oposta
}

void criarPassagensAleatorias(int cavernas[NUM_CAVERNAS][NUM_CAVERNAS], int numCavernas) {
    srand(time(NULL)); // Inicializa o gerador de numeros aleatorios
    for (int i = 0; i < numCavernas; i++) {
        int numPassagens = rand() % 2 + 1; // Cada caverna tera entre 1 e 2 passagens
        for (int p = 0; p < numPassagens; p++) {
            int destino;
            do {
                destino = rand() % numCavernas; // Seleciona um destino aleatorio
            } while (destino == i || cavernas[i][destino] == 1); // Garante que o destino nao seja a caverna atual e nao haja passagem duplicada
            adicionarPassagem(cavernas, i, destino); // Adiciona a passagem
        }
    }
}
void explorarCavernas(int cavernas[NUM_CAVERNAS][NUM_CAVERNAS], int caverna, int visitado[NUM_CAVERNAS]) {
    visitado[caverna] = 1; // Marca a caverna atual como visitada
    printf("Explorando caverna %d\n", caverna); // Imprime a caverna visitada

    for (int i = 0; i < NUM_CAVERNAS; i++) { // Itera sobre todas as cavernas adjacentes
        if (cavernas[caverna][i] == 1 && !visitado[i]) { // Se ha uma passagem e a caverna nao foi visitada
            printf("Passagem de %d para %d\n", caverna, i); // Imprime a passagem
            getchar(); // Aguarda o usuário pressionar Enter

            explorarCavernas(cavernas, i, visitado); // Chama recursivamente para a caverna adjacente
        }
    }

}

void iniciarExploracao(int cavernas[NUM_CAVERNAS][NUM_CAVERNAS], int cavernaInicial, int numCavernas) {
    int visitado[NUM_CAVERNAS]; // Array para marcar as cavernas visitadas
    for (int i = 0; i < numCavernas; i++) { // Inicializa todas as cavernas
        visitado[i] = 0; // Define cada caverna como nao visitada
    }

    printf("Iniciando exploracao a partir da caverna %d\n", cavernaInicial);
    explorarCavernas(cavernas, cavernaInicial, visitado); // Chama a funcao de exploracao em profundidade
}

void exibirCavernasEArestas(int cavernas[NUM_CAVERNAS][NUM_CAVERNAS], int numCavernas) {
    printf("Nos e arestas do sistema de cavernas:\n");
    for (int i = 0; i < numCavernas; i++) { // Itera sobre as linhas da matriz de adjacencia
        for (int j = 0; j < numCavernas; j++) { // Itera sobre as colunas da matriz de adjacencia
            if (cavernas[i][j] == 1) { // Se ha uma passagem entre as cavernas i e j
                printf("Caverna %d -> Caverna %d\n", i, j); // Imprime a passagem
            }
        }
    }
}

// Funcao de menu para interacao com o usuario
void menu() {
    int cavernas[NUM_CAVERNAS][NUM_CAVERNAS]; // Declara a matriz de adjacencia
    int numCavernas = NUM_CAVERNAS; // Numero de cavernas no sistema
    int escolha, origem, destino, cavernaInicial;

    while (1) { // Loop infinito para o menu
        // Exibe o menu de opcoes
        printf("\nSistema de Navegacao em Cavernas:\n");
        printf("1. Inicializar Sistema de Cavernas\n");
        printf("2. Adicionar Passagem entre Cavernas\n");
        printf("3. Criar Passagens Aleatorias\n");
        printf("4. Iniciar Exploracao\n");
        printf("5. Exibir Nos e Arestas\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha); // Le a escolha do usuario

        switch (escolha) {
            case 1:
                inicializarSistemaCavernas(cavernas, numCavernas); // Inicializa a matriz de adjacencia
                printf("Sistema de cavernas inicializado com sucesso!\n");
                break;
            case 2:
                printf("Digite a caverna de origem e destino da passagem (0 a %d): ", numCavernas - 1);
                scanf("%d %d", &origem, &destino); // Le as cavernas de origem e destino
                if (origem >= 0 && origem < numCavernas && destino >= 0 && destino < numCavernas) {
                    adicionarPassagem(cavernas, origem, destino); // Adiciona a passagem ao sistema de cavernas
                    printf("Passagem adicionada com sucesso!\n");
                } else {
                    printf("Cavernas invalidas!\n");
                }
                break;
            case 3:
                criarPassagensAleatorias(cavernas, numCavernas); // Cria passagens aleatorias
                printf("Passagens aleatorias criadas com sucesso!\n");
                break;
            case 4:
                printf("Digite a caverna inicial para a exploracao (0 a %d): ", numCavernas - 1);
                scanf("%d", &cavernaInicial); // Le a caverna inicial
                if (cavernaInicial >= 0 && cavernaInicial < numCavernas) {
                    iniciarExploracao(cavernas, cavernaInicial, numCavernas); // Inicia a exploracao em profundidade
                } else {
                    printf("Caverna invalida!\n");
                }
                break;
            case 5:
                exibirCavernasEArestas(cavernas, numCavernas); // Exibe os nos e arestas
                break;
            case 0:
                printf("Saindo...\n");
                return; // Sai do menu e termina o programa
            default:
                printf("Opcao invalida!\n");
                break;
        }
        getchar(); // Aguarda o usuário pressionar Enter
        getchar(); // Aguarda o usuário pressionar Enter

    }
}
