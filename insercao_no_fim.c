#include<lib.h>

/*Inserção de um nó no fim da lista e apresentar Nome, RG, C(n), M(n), Tempo de execução e sua posição N 
na lista.*/

void inserirNoFim(Node **cabeca, char *nome, int rg) {
    int comp = 0, mov = 0, pos = 1;
    clock_t inicio = clock();
    
    Node *novo = criarNo(nome, rg);
    mov++; // criação do nó
    if(*cabeca == NULL) {
        comp++;
        *cabeca = novo;
        mov++; // atualização da cabeça
        clock_t fim = clock();
        double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
        printf("\nInsercao no fim:\n");
        printf("Nome: %s, RG: %d\nC(n): %d, M(n): %d\nTempo: %.6f s\nPosicao: %d\n",
               novo->nome, novo->rg, comp, mov, tempo, 1);
        return;
    }
    Node *atual = *cabeca;
    comp++; // checagem inicial
    while(atual->next != NULL) {
        comp++;
        atual = atual->next; 
        mov++; // percorrendo a lista
        pos++;
    }
    atual->next = novo; mov++; // inserção
    pos++;
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nInsercao no fim:\n");
    printf("Nome: %s, RG: %d\nC(n): %d, M(n): %d\nTempo: %.6f s\nPosicao: %d\n",
           novo->nome, novo->rg, comp, mov, tempo, pos);
}