//Retirar um nó no fim da lista e apresentar Nome, RG, C(n), M(n), Tempo de execução e sua posição N na lista.
#include<lib.h>
void removerNoFim(Node **cabeca) 
{
    if (*cabeca == NULL) 
    {
       printf("Lista vazia. Nada para remover no fim.\n");
       return;
    }
    Node *atual = *cabeca;
    Node *anterior = NULL;
    int pos = 1;

    while (atual->next != NULL) 
    {
       anterior = atual;
       atual = atual->next;
       pos++;
    }

    if (anterior != NULL)
       anterior->next = NULL;
    else
       *cabeca = NULL;
       
    printf("Removido do fim: %s, %d, posicao: %d\n", atual->nome, atual->rg, pos);
    free(atual);
}