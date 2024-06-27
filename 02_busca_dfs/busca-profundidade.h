#ifndef BUSCA_PROFUNDIDADE_H
#define BUSCA_PROFUNDIDADE_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define o numero maximo de vertices no grafo
#define NUM_CAVERNAS 20 // Definindo o numero de cavernas

void inicializarSistemaCavernas(int cavernas[NUM_CAVERNAS][NUM_CAVERNAS], int numCavernas); // Funcao para inicializar o sistema de cavernas
void adicionarPassagem(int cavernas[NUM_CAVERNAS][NUM_CAVERNAS], int origem, int destino); // Funcao para adicionar uma passagem ao sistema de cavernas
void criarPassagensAleatorias(int cavernas[NUM_CAVERNAS][NUM_CAVERNAS], int numCavernas); // Funcao para criar passagens aleatorias entre as cavernas
void explorarCavernas(int cavernas[NUM_CAVERNAS][NUM_CAVERNAS], int caverna, int visitado[NUM_CAVERNAS]); // Funcao recursiva para realizar a exploracao em profundidade
void iniciarExploracao(int cavernas[NUM_CAVERNAS][NUM_CAVERNAS], int cavernaInicial, int numCavernas); // Funcao para iniciar a exploracao em profundidade a partir de uma caverna inicial
void exibirCavernasEArestas(int cavernas[NUM_CAVERNAS][NUM_CAVERNAS], int numCavernas); // Funcao para exibir as cavernas e arestas
void menu();

#endif // BUSCA_PROFUNDIDADE_H
