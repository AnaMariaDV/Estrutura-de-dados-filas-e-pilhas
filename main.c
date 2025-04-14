#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main() {
    No* head = NULL; // Inicializa a lista como vazia

    // Abre o arquivo "dados.txt" para leitura dos registros
    FILE *file = fopen("dados.txt", "r");// o r é de leitura
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    // Variáveis para armazenar os dados lidos
    /*mesmo que os dados acabem na struct, é necessário primeiro capturá-los em variáveis 
    locais para depois alocá-los na memória da estrutura. Essa separação permite um controle 
    claro do processo de leitura, verificação de erros e posterior utilização dos dados.*/
    char nome[50];
    int rg;
    


    // Exibe a lista carregada a partir do arquivo
    printf("Lista carregada do arquivo:\n");
    printList(head);
    
    // Exemplo de busca: procura um nó com um RG específico
    int rgBusca = 123456789;
    Node* buscado = searchNode(head, rgBusca);
    if (buscado != NULL)
        printf("\nNó encontrado: Nome: %s, RG: %d\n", buscado->nome, buscado->rg);
    else
        printf("\nNó com RG %d não encontrado.\n", rgBusca);
    
    // Exemplo de remoção: remove o nó com RG 987654321
    printf("\nRemovendo nó com RG 987654321...\n");
    deleteNode(&head, 987654321);
    printf("Lista após a remoção:\n");
    printList(head);
    
    // Libera a memória alocada para a lista
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
    
    return 0;
}
