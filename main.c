#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main() {
    Node *cabeca = NULL;
    menu(&cabeca);
    
    // Libera a memória da lista, se necessário.
    Node *atual;
    while(cabeca != NULL) {
        atual = cabeca;
        cabeca = cabeca->next;
        free(atual);
    }
    return 0;
}
