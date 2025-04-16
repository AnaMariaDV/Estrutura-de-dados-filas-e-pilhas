#include"lib.h"


void procurarPorRG(Node *cabeca, int rg) {
    int comp = 0, mov = 0, pos = 1;
    clock_t inicio = clock();
    Node *atual = cabeca;
    
    while(atual != NULL) {
        comp++;
        if(atual->rg == rg) {
            clock_t fim = clock();
            double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
            printf("\nBusca pelo RG %d:\n", rg);
            printf("Nome: %s, RG: %d\nC(n): %d, M(n): %d\nTempo: %.6f s\nPosicao: %d\n",
                   atual->nome, atual->rg, comp, mov, tempo, pos);
            return;
        }
        atual = atual->next; mov++;
        pos++;
    }
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nBusca pelo RG %d:\nNenhum no encontrado.\nC(n): %d, M(n): %d, Tempo: %.6f s\n",
           rg, comp, mov, tempo);
}