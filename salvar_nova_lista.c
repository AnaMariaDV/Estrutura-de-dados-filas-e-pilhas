//Salvar a lista em um arquivo.
//no formato nome,RG
#include<lib.h>



void salvarLista(Node *cabeca, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
       printf("Erro ao abrir arquivo para escrita.\n");
       return;
    }
    Node *atual = cabeca;
    while (atual != NULL) {
       fprintf(arquivo, "%s,%d\n", atual->nome, atual->rg);
       atual = atual->next;
    }
    fclose(arquivo);
    printf("Lista salva no arquivo %s.\n", nomeArquivo);
}
