#include<lib.h>


Node* buscarNo(Node *cabeca, int rg) {
    Node *atual = cabeca;
    int pos = 1;
    while (atual != NULL) {
        if (atual->rg == rg) {
            printf("No encontrado na posicao %d: %s, %d\n", pos, atual->nome, atual->rg);
            return atual;
        }
        atual = atual->next;
        pos++;
    }
    printf("No com RG %d nao encontrado.\n", rg);
    return NULL;
}