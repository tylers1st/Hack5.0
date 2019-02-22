#include<stdlib.h>
#include<stdio.h>

#include "array_utils.h"

int containsWithin(const int *arr, int size, int x, int i, int j) {
   //todo
   for(; i <= j; i++){
      if(arr[i] == x){
         return 1;
      }
   }
  return 0;
}

int contains(const int *arr, int size, int x) {

   //todo
   for(int i = 0; i < size; i++){
      if(arr[i] == x){
         return 1;
      }
   }
  return 0;
}

void reverse(int *arr, int size) {
   //todo
   int tempArr[size];
   for(int i = 0, j = size - 1; i < size; i++,j--){
      tempArr[i] = arr[j];
   }
   for(int i = 0; i < size; i++){
      arr[i] = tempArr[i];
   }
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
   int array[4] = {1,2,3,4};
   printf("%d\n", array[2]);
   contains(array, 4, 2);
   printf("%d\n", contains(array, 4, 2) );
   printf("%d\n", contains(array, 4, 5) );
   return 0;
}
