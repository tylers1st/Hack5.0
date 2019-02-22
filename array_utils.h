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
   int index = 0;
   int min = arr[0];
   int prevMin = -1;
      for (int j = 0; j < i; ++j){
         index = 0;
         printf("\n\nj = %d\n\n", j);
         printf("\nFirst for loop\n");
         printf("min = %d, prevMin = %d, arr[index] = %d\n", min, prevMin, arr[index]);
         for(index = 0; index < size; index++){
            printf("Index = %d\n", index);
            if (arr[index] > prevMin){
                min = arr[index];
               for (int index2 = 0; index2 < size; index2++){
                  printf("arr[%d] = %d\n",index2,arr[index2]);
                   if(arr[index2] < min && arr[index2] > prevMin){
                     min = arr[index2];
                     printf("min = %d\n\n", min);
                  }
               }
            prevMin = min;
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
   printf("%d\n", orderStatistic(array2, 4 , 1));
   printf("\n---------------\n");
   
   printf("%d\n", orderStatistic(array2, 4, 2));
   return 0;
}
