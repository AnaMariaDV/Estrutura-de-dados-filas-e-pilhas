#include<lib.h>
void removerNoPosicao(Node **cabeca, int posDesejada) 
{
    if (*cabeca == NULL) 
    {
       printf("Lista vazia. Nada para remover na posicao %d.\n", posDesejada);
       return;
    }

    if (posDesejada <= 1) 
    {
       removerNoInicio(cabeca);
       return;
    }


    Node *atual = *cabeca;
    Node *anterior = NULL;
    int pos = 1;


    while (atual != NULL && pos < posDesejada) 
    {
       anterior = atual;
       atual = atual->next;
       pos++;
    }

    if (atual == NULL) 
    {
       printf("Posicao %d invalida.\n", posDesejada);
       return;
    }

    anterior->next = atual->next;
    printf("Removido da posicao %d: %s, %d\n", posDesejada, atual->nome, atual->rg);
    free(atual);
}