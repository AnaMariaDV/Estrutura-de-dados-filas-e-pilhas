#include<lib.h>

/*Inserção de um nó no fim da lista e apresentar Nome, RG, C(n), M(n), Tempo de execução e sua posição N 
na lista.*/

void inserirNoFim(Node **cabeca, char *nome, int rg) {
    Node* novoNo = criarNo(nome, rg);
    if (*cabeca == NULL) {
        *cabeca = novoNo;
        return;
    }
    Node *atual = *cabeca;
    while (atual->next != NULL)
        atual = atual->next;
    atual->next = novoNo;
}