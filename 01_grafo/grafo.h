#ifndef GRAFO_H
#define GRAFO_H

#define NUM_VERTICES 5 // Define o numero de vertices no grafo

void inicializarMatriz(int matriz[NUM_VERTICES][NUM_VERTICES]); // Declara a funcao para inicializar a matriz de adjacencia
void adicionarAresta(int matriz[NUM_VERTICES][NUM_VERTICES], int origem, int destino); // Declara a funcao para adicionar uma aresta ao grafo
void exibirMatriz(int matriz[NUM_VERTICES][NUM_VERTICES]); // Declara a funcao para exibir a matriz de adjacencia
int iniciaGrafo();

#endif // GRAFO_H
