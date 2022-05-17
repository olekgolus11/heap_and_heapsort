//
// Created by Olek on 17.05.2022.
//

#ifndef HEAP_HEAPSORT_HEAP_H
#define HEAP_HEAPSORT_HEAP_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define LEFT(arr, i) (arr[2*i + 1])
#define RIGHT(arr, i) (arr[2*i + 2])
#define PARENT(arr, i) (arr[i])
#define SWAP(a, b) \
{                              \
    int temp;\
    temp = a;\
    a = b;\
    b = temp;\
}                              \

#define ISLEAF(arr, pos, size) pos*2 + 2 > size ? 1 : 0

enum leftright
{
    LEFT, RIGHT
};

void heapify(int* arr, int pos, int arrsize);
void build_heap(int* arr, int arrsize);
void print_heap(int* arr, int arrsize);

#endif //HEAP_HEAPSORT_HEAP_H
