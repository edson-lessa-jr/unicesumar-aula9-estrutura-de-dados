#include <stdio.h> // Inclui a biblioteca de entrada e saida
#include "grafo.h" // Inclui o cabeçalho do grafo

#define NUM_VERTICES 5 // Define o numero de vertices no grafo

// Funcao para inicializar a matriz de adjacencia
void inicializarMatriz(int matriz[NUM_VERTICES][NUM_VERTICES]) {
    for (int i = 0; i < NUM_VERTICES; i++) { // Itera sobre as linhas da matriz de adjacencia
        for (int j = 0; j < NUM_VERTICES; j++) { // Itera sobre as colunas da matriz de adjacencia
            matriz[i][j] = 0; // Inicializa cada entrada da matriz com 0 (sem aresta)
        }
    }
}

// Funcao para adicionar uma aresta ao grafo
void adicionarAresta(int matriz[NUM_VERTICES][NUM_VERTICES], int origem, int destino) {
    matriz[origem][destino] = 1; // Define a entrada (origem, destino) como 1 (existe uma aresta)
    matriz[destino][origem] = 1; // Para grafos nao direcionados, adiciona tambem a aresta oposta
}

// Funcao para exibir a matriz de adjacencia
void exibirMatriz(int matriz[NUM_VERTICES][NUM_VERTICES]) {
    for (int i = 0; i < NUM_VERTICES; i++) { // Itera sobre as linhas da matriz de adjacencia
        for (int j = 0; j < NUM_VERTICES; j++) { // Itera sobre as colunas da matriz de adjacencia
            printf("%d ", matriz[i][j]); // Imprime o valor da entrada da matriz
        }
        printf("\n"); // Nova linha apos cada linha da matriz
    }
}

int iniciaGrafo() {
    int matriz[NUM_VERTICES][NUM_VERTICES]; // Declara a matriz de adjacencia
    inicializarMatriz(matriz); // Chama a funcao para inicializar a matriz

    // Adiciona algumas arestas ao grafo
    adicionarAresta(matriz, 0, 1); // Adiciona uma aresta entre os vertices 0 e 1
    adicionarAresta(matriz, 0, 4); // Adiciona uma aresta entre os vertices 0 e 4
    adicionarAresta(matriz, 1, 2); // Adiciona uma aresta entre os vertices 1 e 2
    adicionarAresta(matriz, 1, 3); // Adiciona uma aresta entre os vertices 1 e 3
    adicionarAresta(matriz, 1, 4); // Adiciona uma aresta entre os vertices 1 e 4
    adicionarAresta(matriz, 2, 3); // Adiciona uma aresta entre os vertices 2 e 3
    adicionarAresta(matriz, 3, 4); // Adiciona uma aresta entre os vertices 3 e 4

    // Exibe a matriz de adjacencia
    printf("Matriz de Adjacencia:\n"); // Imprime o titulo
    exibirMatriz(matriz); // Chama a funcao para exibir a matriz de adjacencia

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
