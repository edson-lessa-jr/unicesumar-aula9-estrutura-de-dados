cmake_minimum_required(VERSION 3.28)
project(unicesumar_aula9_estrutura_dados C)

set(CMAKE_C_STANDARD 11)

add_executable(unicesumar_aula9_estrutura_dados main.c
        02_busca_dfs/busca-profundidade.c
        02_busca_dfs/busca-profundidade.h
        02_busca_dfs/busca-profundidade.h
        01_grafo/grafo.c
        01_grafo/grafo.h
        01_grafo/grafo.h)
