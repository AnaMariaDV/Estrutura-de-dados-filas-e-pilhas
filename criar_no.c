#include<lib.h>

Node* criarNo(char *nome, int rg) {
    Node* novoNo = (Node*) malloc(sizeof(Node));
    if (novoNo == NULL) {
        printf("Erro na alocacao de memoria.\n");
        exit(1);
    }
    copiarString(novoNo->nome, nome);
    novoNo->rg = rg;
    novoNo->next = NULL;
    return novoNo;
}