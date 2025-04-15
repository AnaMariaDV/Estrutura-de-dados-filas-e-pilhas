#ifndef LIB_H
#define LIB_H
#include <stdio.h>
#include <stdlib.h>
#include<time.h>


// Estrutura do nó contendo Nome e RG (RG com 9 algarismos, armazenado como int)
typedef struct Node {
    char nome[50];      // Nome (até 49 caracteres + '\0')
    int rg;             // RG (9 algarismos)
    struct Node *next;  // Ponteiro para o próximo nó
} Node;

// Funções básicas de manipulação da lista
Node* criarNo(char *nome, int rg);
void inserirNoInicio(Node **cabeca, char *nome, int rg);
void inserirNoFim(Node **cabeca, char *nome, int rg);
void inserirNoPosicao(Node **cabeca, char *nome, int rg, int posDesejada);
void removerNoInicio(Node **cabeca);
void removerNoFim(Node **cabeca);
void removerNoPosicao(Node **cabeca, int posDesejada);
Node* buscarNo(Node *cabeca, int rg);
void imprimirLista(Node *cabeca);
// Funções com métricas (usando time.h)
void inserirNoInicioMetrica(Node **cabeca, char *nome, int rg);
void inserirNoFimMetrica(Node **cabeca, char *nome, int rg);
void inserirNoPosicaoMetrica(Node **cabeca, char *nome, int rg, int posDesejada);
void removerNoInicioMetrica(Node **cabeca);
void removerNoFimMetrica(Node **cabeca);
void removerNoPosicaoMetrica(Node **cabeca, int posDesejada);
void procurarNoRGMetrica(Node *cabeca, int rg);

// Funções de operação de arquivo
void salvarLista(Node *cabeca, const char *nomeArquivo);
void lerLista(Node **cabeca, const char *nomeArquivo);

// Função de menu para interação com o usuário
void menu(Node **cabeca);
void copiarString(char *destino, const char *origem);
void sair_do_sistema();
#endif
