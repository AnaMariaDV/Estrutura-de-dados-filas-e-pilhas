#include"lib.h"


void inserirNoInicio(Node **cabeca, char *nome, int rg) {
    int comp = 0, mov = 0;
    clock_t inicio = clock();
    
    Node *novo = criarNo(nome, rg); 
    mov++; // criação do nó (atribuição durante criação)
    
    novo->next = *cabeca;
    mov++; // atribuindo novo->next
    *cabeca = novo;
    mov++; // atualizando a cabeça
    
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    
    // Na inserção no início, a posição é sempre 1
    printf("\nInsercao no inicio:\n");
    printf("Nome: %s, RG: %d\nC(n): %d, M(n): %d\nTempo: %.6f s\nPosicao: %d\n",
           novo->nome, novo->rg, comp, mov, tempo, 1);
}