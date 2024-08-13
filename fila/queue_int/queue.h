#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Queue
{
    int front;
    int back;
    int *elements;
    int current_size;
    int max_size;
} Queue;

Queue *create_queue(int max_size)
{
    Queue *new_queue = (Queue *)malloc(sizeof(Queue));

    new_queue->front = -1;
    new_queue->back = new_queue->front;
    new_queue->elements = (int *)malloc(max_size * sizeof(int));
    new_queue->current_size = 0;
    new_queue->max_size = max_size;

    return new_queue;
}

void enqueue(Queue *my_queue, int element)
{
    if (my_queue == NULL)
    {
        return;
    }

    if (my_queue->current_size >= my_queue->max_size)
    {
        printf("nao eh possivel add mais um elemento\nfila cheia!\n");
    }
    else
    {
        my_queue->current_size++;
        my_queue->elements[my_queue->current_size - 1] = element;
        my_queue->back = element;
        if (my_queue->current_size == 1)
            my_queue->front = my_queue->back;
        else
            my_queue->front = my_queue->elements[0];
    }
}

void dequeue(Queue *my_queue)
{
    if (my_queue == NULL)
    {
        return;
    }

    if (my_queue->current_size <= 0)
    {
        printf("nao eh possivel remover elementos\nfila vazia!");
    }
    else
    {
        my_queue->current_size--;
        my_queue->elements[my_queue->current_size] = 0;
        my_queue->front = my_queue->elements[my_queue->current_size - 1];
        if (my_queue->current_size == 1)
            my_queue->back = my_queue->front;
        else
            my_queue->back = my_queue->elements[0];
    }
}

int is_empty(Queue *my_queue)
{
    if (my_queue->current_size == 0)
        return 0;
    return -1;
}

void show_queue(Queue *my_queue)
{
    int counter;
    if (my_queue->current_size == 0)
        printf("fila vazia\n");

    for (counter = 0; counter < my_queue->current_size; counter++)
    {
        printf("%i\n", my_queue->elements[counter]);
    }
}