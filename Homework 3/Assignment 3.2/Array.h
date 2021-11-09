#ifndef ARRAY_H_
#define ARRAY_H_
#include <stdio.h>

/**
 * @brief function swaps 2 values in array
 * @param address of 2 values
 */
void swap(int* val1, int* val2);

/**
 * @brief function sorts values in array from smallest to greatest
 * @param array, and size of array
 */
void sort(int* array, int size);

/**
 * @brief function prints values in an array
 * @param array, and size of array
 */
void printArray(int* array, int size);

#endif //ARRAY_H_