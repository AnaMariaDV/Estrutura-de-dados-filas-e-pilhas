#include<lib.h>


void inserirNoInicio(Node **cabeca, char *nome, int rg) 
{
    Node *novoNo = criarNo(nome, rg);
    novoNo->next = *cabeca;
    *cabeca = novoNo;
    printf("Inserido no inicio: %s, %d, posicao: 1\n", novoNo->nome, novoNo->rg);
}