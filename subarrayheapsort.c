#include <stdio.h>
#include <stdlib.h>
#include "cis3333prog3.h"
#define IS_LESS(value1, value2)  (value1 < value2)
#define SWAP(r,s)  do{int t=r; r=s; s=t; } while(0)

void siftDown(int *a, int start, int count);

void heapSort(int *a, int count) {
        int start, end;
        for (start = (count-2)/2; start >=0; start--) {
                siftDown( a, start, count);
        }//for

        for (end=count-1; end > 0; end--) {
                SWAP(a[end],a[0]);
                siftDown(a, 0, end);
        }//for
}//heapSort

void siftDown(int *a, int start, int end){
        int root = start;

        while ( root*2+1 < end ) {
                int child = 2*root + 1;
                if ((child + 1 < end) && IS_LESS(a[child],a[child+1])) {
                        child += 1;
                }//if
                if (IS_LESS(a[root], a[child])) {
                        SWAP( a[child], a[root] );
                        root = child;
                }/*if*/ else {
                        return;
                }//else
    }//while
}//siftDown
