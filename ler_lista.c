#include"lib.h"
void lerLista(Node **cabeca, const char *nomeArquivo) {
    FILE *arq = fopen(nomeArquivo, "r");
    if(arq == NULL) {
        printf("\nErro ao abrir arquivo para leitura.\n");
        return;
    }
    char linha[100], nome[50];
    int rg;
    while(fgets(linha, sizeof(linha), arq)) {
        if(sscanf(linha, "%[^,],%d", nome, &rg) == 2) {
            Node *novo = criarNo(nome, rg);
            novo->next = *cabeca;
            *cabeca = novo;
        }
    }
    fclose(arq);
    printf("\nLista lida do arquivo %s.\n", nomeArquivo);
}