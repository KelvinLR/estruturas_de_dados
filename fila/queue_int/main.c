#include <stdio.h>
#include "queue.h"

int main(void)
{
    Queue *my_queue = create_queue(3);

    printf("adicionando\n");

    enqueue(my_queue, 4);
    printf("front: %i // back: %i\n", my_queue->back, my_queue->front);
    enqueue(my_queue, 3);
    printf("front: %i // back: %i\n", my_queue->back, my_queue->front);
    enqueue(my_queue, 5);
    printf("front: %i // back: %i\n", my_queue->back, my_queue->front);

    printf("removendo\n");

    dequeue(my_queue);
    printf("front: %i // back: %i\n", my_queue->back, my_queue->front);
    dequeue(my_queue);
    printf("front: %i // back: %i\n", my_queue->back, my_queue->front);
    dequeue(my_queue);
    printf("front: %i // back: %i\n", my_queue->back, my_queue->front);

    show_queue(my_queue);
}