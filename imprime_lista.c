#include<lib.h>

void imprimirLista(Node *cabeca) {
    if (cabeca == NULL) {
       printf("Lista vazia.\n");
       return;
    }
    Node *atual = cabeca;
    int pos = 1;
    printf("Lista:\n");
    while (atual != NULL) {
        printf("%d: %s, %d\n", pos, atual->nome, atual->rg);
        atual = atual->next;
        pos++;
    }
}
