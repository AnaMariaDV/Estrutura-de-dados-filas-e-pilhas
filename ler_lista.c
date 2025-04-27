// ler_lista.c
#include "lib.h"

void lerLista(Node **cabeca, const char *nomeArquivo) {
    clock_t inicio = clock();
    FILE *arq = fopen(nomeArquivo, "r");
    if (arq == NULL) 
    {
        printf("\nErro ao abrir '%s' para leitura.\n", nomeArquivo);
        return;
    }

    char linha[100], nome[50];
    int rg;
    while (fgets(linha, sizeof(linha), arq)) 
    {
        if (sscanf(linha, "%49[^,],%d", nome, &rg) == 2) {
            inserirNoFim(cabeca, nome, rg);
        }
    }
    fclose(arq);

    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf(
      "\nLista carregada de '%s' na ordem original.\n"
      "Tempo de leitura: %.6f s\n",
      nomeArquivo, tempo
    );
}