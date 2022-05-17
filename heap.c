//
// Created by Olek on 17.05.2022.
//

#include "heap.h"

void heapify(int* arr, int pos, int arrsize)
{
    if (ISLEAF(arr, pos, arrsize)) return;
    int max;
    enum leftright choice;
    if (LEFT(arr, pos) > RIGHT(arr, pos))
    {
        max = LEFT(arr, pos);
        choice = LEFT;
    }
    else
    {
        max = RIGHT(arr, pos);
        choice = RIGHT;
    }
    if (PARENT(arr, pos) > max) max = PARENT(arr, pos);
    else
    {
        switch (choice)
        {
            case LEFT:
            {
                SWAP(LEFT(arr, pos), PARENT(arr, pos));
                heapify(arr, pos * 2 + 1, arrsize);
                break;
            }
            case RIGHT:
            {
                SWAP(RIGHT(arr, pos), PARENT(arr, pos));
                heapify(arr, pos * 2 + 2, arrsize);
                break;
            }
        }
    }
}

void build_heap(int* arr, int arrsize)
{
    for (int i = arrsize / 2 - 1; i >= 0; i--)
    {
        heapify(arr, i, arrsize);
    }
}


void print_heap(int* arr, int arrsize)
{
    int h = (int)log2((double)arrsize);
    for (int i = 0; i <= h; i++)
    {
        //printing initial spaces
        for (int j = 0; j < pow(2, h + 1 - i) - 2; j++)
        {
            printf(" ");
        }
        //priniting numbers with spaces
        for (int j = 0; j < pow(2, i); j++)
        {
            if ((int)pow(2, i) - 1 + j + 1 > arrsize)
            {
                printf("\n");
                return;
            }
            printf("%2d  ", arr[(int)pow(2, i) - 1 + j]);
            for (int k = 0; k < pow(2, h + 1 - i) - 2; k++)
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}