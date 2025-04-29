// ler_lista.c
#include "lib.h"


#define LINHA_MAX 2048  // buffer de 2 KB por linha

void lerLista(Node **cabeca, const char *nomeArquivo) {
    clock_t inicio = clock();

    FILE *arq = fopen(nomeArquivo, "r");
    if (!arq) {
        perror("Erro ao abrir arquivo");
        return;
    }
    setvbuf(arq, NULL, _IOFBF, 1 << 20);  // buffer de I/O de 1 MiB

    *cabeca = NULL;
    Node *tail = NULL;
    char linha[LINHA_MAX];
    char nome[50];
    int rg;

    // 1) Usando fgets + sscanf
    while (fgets(linha, sizeof(linha), arq)) {
        if (sscanf(linha, "%49[^,],%d", nome, &rg) == 2) {
            Node *novo = criarNo(nome, rg);
            if (!*cabeca) *cabeca = novo;
            else          tail->next = novo;
            tail = novo;
        }
    }

    /* 
    // — OU — 
    // 2) Usando fscanf direto, sem buffer intermediário:
    while (fscanf(arq, " %49[^,],%d", nome, &rg) == 2) {
        Node *novo = criarNo(nome, rg);
        if (!*cabeca) *cabeca = novo;
        else          tail->next = novo;
        tail = novo;
    }
    */

    fclose(arq);

    double tempo = (double)(clock() - inicio) / CLOCKS_PER_SEC;
    printf(
      "\nLista carregada de '%s' em %.6f s\n",
      nomeArquivo, tempo
    );
}
