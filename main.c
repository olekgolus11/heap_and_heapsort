#include "heap.h"

#define SIZE 26

int main()
{
    srand(time(NULL));
    int arr[SIZE];
    //filling
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 100;
    }
    //printing before
    for (int i = 0; i < SIZE; i++)
    {
        printf("-");
    }
    printf("BEFORE:\n");
    print_heap(arr, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("-");
    }
    printf("AFTER:\n");
    build_heap(arr, SIZE);
    //printing after
    print_heap(arr, SIZE);
    return 0;
}