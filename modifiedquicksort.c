#include <stdio.h>
#include <math.h>
#include "cis3333prog3.h"

void quickSort (int *array, int length, int count) {
        if (length < 2)
           return;
        int pivot = array[length / 2];
        int *left = array;
        int *right = array + length - 1;
        int heapCount = 0;

        while (left <= right) {
                if (*left < pivot) {
                        left++;
                        continue;
                }
                if (*right > pivot) {
                        right--;
                        continue;
                }

                int temp = *left;
                *left++ = *right;
                *right-- = temp;
        }

        if(count >= (int) log2(length)){
                heapSort(array, length);
        } else{
                quickSort(array, right - array + 1, count + 1);
                quickSort(left, array + length - left, count + 1);
        }

}
