#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cis3333prog3.h"
#define M 100000
#define N 1000
#define X 10000

int main(){
        int x = 0;
        int length;
        int boolean = 1;
        int lcv;
        int ac;
        int arrayOneK[1000];
        int arrayTenK[10000];
        int randArrays[N];

/*****************************Array Creators**************************/
        for (ac = 1; ac <= 1000; ac++){
                arrayOneK[ac] = ac;

        }//creates 1k integer array, already sorted

        for(ac = 10000; ac >= 0; ac--){
                arrayTenK[ac] = ac;
        }//creates a 10k array, reverse sorted


/*****************************Tests the array of 1k integer array that is already sor                                                                                            ted**************************/
        length = N;/*sizeof arrayOneK / sizeof arrayOneK[0];*/
        quickSort(arrayOneK, length, x);
        for(lcv = 1; lcv < length && boolean; lcv++){
                if(arrayOneK[lcv - 1] > arrayOneK[lcv]){
                        boolean = 0;
                }//if the array isn't sorted then set boolean to 0
        }//for the length of the array
        if(boolean == 1){
                printf("%d 1K integer array is sorted! \n", arrayOneK);
        }//if the array is sorted, print a messate saying so
        else{
                printf("%d \n", arrayOneK[lcv]);
        }//else print the array
        //ac = 0;
        boolean = 1;
        length = 0;



/*****************************Tests the array of 10k integer array that is already so                                                                                            rted**************************/
        length = X;
        quickSort(arrayTenK, length, x);
        for(lcv = 1; lcv < length && boolean; lcv++){
                if(arrayTenK[lcv - 1] > arrayTenK[lcv]){
                        boolean = 0;
                }//if the array isn't sorted then set boolean to 0
        }//for the length of the array
        if(boolean == 1){
                printf("10K integer array is sorted! \n");
        }//if the array is sorted, print a messate saying so
        else{
                printf("%d \n", arrayTenK[lcv]);
        }//else print the array
        //ac = 0;
        boolean = 1;
        length = 0;


/*****************************Creates 1k arrays each with a randomly determined lengt                                                                                            h between 1k and 100k random int values.**************************/
        int ac2;
        for(ac = N; ac >= N && ac <= M; ac++){
                for(ac2 = 0; ac2 <= N ; ac2++){
                        randArrays[ac2] = rand();
                }
                  length = sizeof randArrays / sizeof randArrays[0];
        quickSort(randArrays, length, x);
        for(lcv = 1; lcv < length && boolean; lcv++){
                if(randArrays[lcv - 1] > randArrays[lcv]){
                        boolean = 0;
                }//if the array isn't sorted then set boolean to 0
        }//for the length of the array
        if(boolean == 1){
                printf("Random arrays are sorted!\n");
        }//if the array is sorted, print a messate saying so
        else{
                printf("%d \n", randArrays[lcv]);
        }//else print the array
        boolean = 1;
        length = 0;

        }
        //printf("%d\n", randArrays[ac]);


/*****************************Tests 1k arrays each with a randomly determined le                                                                                                 between 1k and 100k random int values.**************************/
        length = sizeof randArrays / sizeof randArrays[0];
        quickSort(randArrays, length, x);
        for(lcv = 1; lcv < length && boolean; lcv++){
                if(randArrays[lcv - 1] > randArrays[lcv]){
                        boolean = 0;
                }//if the array isn't sorted then set boolean to 0
        }//for the length of the array
        if(boolean == 1){
                printf("Random arrays are sorted!\n");
        }//if the array is sorted, print a messate saying so
        else{
                printf("%d \n", randArrays[lcv]);
        }//else print the array*
        boolean = 1;
        length = 0;

