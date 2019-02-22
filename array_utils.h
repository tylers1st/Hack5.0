#include<stdlib.h>
#include <stdio.h>

#include "array_utils.h"

int containsWithin(const int *arr, int size, int x, int i, int j) {
   //todo
  return 0;
}

int contains(const int *arr, int size, int x) {
   
   //todo
  return 0;
}

void reverse(int *arr, int size) {
   //todo
  return;
}

int orderStatistic(int *arr, int size, int i){
   int element = -1;
   //todo
   int min = arr[0];
   int prevMin = -1;
      for (int j = 0; j < i; ++j){
      printf("\n\nj = %d\n\n", j);
      printf("\nFirst for loop\n");
      printf("min = %d, prevMin = %d, arr[j] = %d\n", min, prevMin, arr[j]);
         if (arr[j] > prevMin){
            min = arr[j];
            for (int k = 0; k < size; k++){
               printf("arr[%d] = %d\n",k,arr[k]);
               if(arr[k] < min && arr[k] > prevMin){
                  min = arr[k];
                  printf("min = %d\n\n", min);
                  prevMin = min;
               }
            }
         }
      }
   element = min;
   return element;
}

int main(){
   //you may choose to do your testing here
   // int array[10] = {1,2,5,4,5,6,7,8,9,10};
   // printf("%d\n", orderStatistic(array, 10, 3));
   int array2[4] = {5,2,1,0};
   printf("%d\n", orderStatistic(array2, 4 , 4));
   printf("\n---------------\n");
   
   printf("%d\n", orderStatistic(array2, 4, 3));
   return 0;
}
