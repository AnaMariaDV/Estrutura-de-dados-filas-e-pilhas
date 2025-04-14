#include<lib.h>
void lerLista(Node **cabeca, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
       printf("Erro ao abrir arquivo para leitura.\n");
       return;
    }
    char linha[100];
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
       char nome[50];
       int rg;
       if (sscanf(linha, "%[^,],%d", nome, &rg) == 2) {
           inserirNoFim(cabeca, nome, rg);
       }
    }
    fclose(arquivo);
    printf("Lista carregada do arquivo %s.\n", nomeArquivo);
}
