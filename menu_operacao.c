#include<lib.h>

void menu(Node **headRef) {
    int choice;
    do {
        printf("\n=== Menu de Operações ===\n");
        printf("1. Registrar dados do arquivo\n");
        printf("2. Inserir no início\n");
        printf("3. Inserir no fim\n");
        printf("4. Buscar nó\n");
        printf("5. Remover nó\n");
        printf("6. Imprimir lista\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: {
                char filename[100];
                printf("Entre com o nome do arquivo: ");
                scanf("%s", filename);
                registerDataFromFile(headRef, filename);
                break;
            }
            case 2: {
                char nome[50];
                int rg;
                printf("Entre com o nome: ");
                scanf("%s", nome);
                printf("Entre com o RG (9 algarismos): ");
                scanf("%d", &rg);
                insertAtBeginning(headRef, nome, rg);
                break;
            }
            case 3: {
                char nome[50];
                int rg;
                printf("Entre com o nome: ");
                scanf("%s", nome);
                printf("Entre com o RG (9 algarismos): ");
                scanf("%d", &rg);
                insertAtEnd(headRef, nome, rg);
                break;
            }
            case 4: {
                int rg;
                printf("Entre com o RG para buscar: ");
                scanf("%d", &rg);
                Node *node = searchNode(*headRef, rg);
                if (node) {
                    printf("Nó encontrado: Nome: %s, RG: %d\n", node->nome, node->rg);
                } else {
                    printf("Nó com RG %d não encontrado.\n", rg);
                }
                break;
            }
            case 5: {
                int rg;
                printf("Entre com o RG para remoção: ");
                scanf("%d", &rg);
                deleteNode(headRef, rg);
                break;
            }
            case 6: {
                printf("Lista atual:\n");
                printList(*headRef);
                break;
            }
            case 0: {
                printf("Saindo...\n");
                break;
            }
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (choice != 0);
}