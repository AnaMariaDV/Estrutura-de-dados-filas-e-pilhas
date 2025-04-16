#include"lib.h"

Node* criarNo(char *nome, int rg) {
    Node* novo = (Node*) malloc(sizeof(Node));
    if (!novo) {
        printf("Erro de alocacao!\n");
        exit(1);
    }
    copiarString(novo->nome, nome);
    novo->rg = rg;
    novo->next = NULL;
    return novo;
}