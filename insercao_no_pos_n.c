//Inserção de um nó na posição N e apresentar Nome, RG, C(n), M(n), Tempo de execução e sua posição N na lista.
#include<lib.h>

void inserirNoPosicao(Node **cabeca, char *nome, int rg, int posDesejada) {
    if (posDesejada <= 1 || *cabeca == NULL) {
        inserirNoInicio(cabeca, nome, rg);
        return;
    }
    Node *novoNo = criarNo(nome, rg);
    Node *atual = *cabeca;
    int pos = 1;
    while (atual->next != NULL && pos < posDesejada - 1) {
        atual = atual->next;
        pos++;
    }
    novoNo->next = atual->next;
    atual->next = novoNo;
    printf("Inserido na posicao %d: %s, %d\n", posDesejada, novoNo->nome, novoNo->rg);
}