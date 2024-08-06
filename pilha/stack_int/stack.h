#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Stack {
        int top;
        int *elements;
        int current_size;
        int max_size;
} Stack;

Stack *create_stack(int max_size) {
    Stack *new_stack = malloc(sizeof(Stack));

    new_stack->top = -1;
    new_stack->elements = malloc(new_stack->max_size * sizeof(int));
    new_stack->current_size = 0;
    new_stack->max_size = max_size;

    return new_stack;
}

void push(Stack *my_stack, int element) {
    if(my_stack == NULL) {
        return;
    }

    if(my_stack->current_size >= my_stack->max_size) {
        printf("nao eh possivel add mais um elemento\npilha cheia!\n");
    } else {
        my_stack->current_size++;
        my_stack->elements[my_stack->current_size-1] = element;
        my_stack->top = element;
    }
}

void pop(Stack *my_stack) {
    if(my_stack == NULL) {
        return;
    }

    if(my_stack->current_size >= my_stack->max_size) {
        printf("nao eh possivel remover elementos\npilha vazia!");
    } else {
        my_stack->current_size--;
        my_stack->elements[my_stack->current_size] = 0;
        my_stack->top = my_stack->elements[my_stack->current_size];
    }
}

int is_empty(Stack *my_stack) {
    if(my_stack->current_size == 0) return 0;
    return -1;
}

void show_stack(Stack *my_stack) {
    int counter;
    for(counter = 0; counter < my_stack->current_size; counter++) {
        printf("%i\n", my_stack->elements[counter]);
    }
}

void bubble_sort(Stack) {}