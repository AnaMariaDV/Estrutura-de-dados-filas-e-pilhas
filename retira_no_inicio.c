//Retirar um nó do início da lista e apresentar Nome, RG, C(n), M(n), Tempo de execução e sua posição N na lista..
#include<lib.h>

void removerNoInicio(Node **cabeca) 
{
    if (*cabeca == NULL) 
    {
       printf("Lista vazia. Nada para remover no inicio.\n");
       return;
    }
    Node *removido = *cabeca;
    *cabeca = removido->next;
    printf("Removido do inicio: %s, %d, posicao: 1\n", removido->nome, removido->rg);
    free(removido);
}
