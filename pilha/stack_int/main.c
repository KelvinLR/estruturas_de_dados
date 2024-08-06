#include <stdio.h>
#include "stack.h"

int main(void) {
    int max_stack_size = 0;
    int opc, new_number;

    printf("CRIANDO PILHA DE VALORES INTEIROS\n");
    printf("Digite a quantidade maxima de elementos da pilha\n>");
    scanf("%d", &max_stack_size);

    Stack *mystack = create_stack(max_stack_size);

    do {
        printf("OPERACOES COM A PILHA\n");
        printf("1 - adicionar elemento no topo\n");
        printf("2 - remover elemento do topo\n");
        printf("3 - verificar se esta vazia\n");
        printf("4 - exibir pilha\n");
        printf("5 - exibir elemento do topo\n>");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                printf("ADICIONAR ELEMENTO NO TOPO\n");
                printf("Digite algum valor inteiro\n>");
                scanf("%d", &new_number);
                push(mystack, new_number);
                break;
            case 2:
                printf("ADICIONAR ELEMENTO NO TOPO\n");
                pop(mystack);
                printf("Elemento %d removido", mystack->top);
                break;
            case 3:
                if(is_empty(mystack) == 0) printf("Pilha vazia\n");
                else printf("Tamanho da pilha: %i", mystack->current_size);
            case 4:
                printf("PILHA\n");
                show_stack(mystack);
            case 5:
                printf("TOPO DA PILHA");
                printf("%d", mystack->top);
            default:
                break;
        }
    } while (opc != 0);
}