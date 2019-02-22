#include<stdlib.h>
#include<stdio.h>

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
               while(arr[index] <= prevMin && index < size - 1){
                  index++;
               }
               if(arr[index] > prevMin){
                  min = arr[index];
                  for (int index2 = 0; index2 < size; index2++){
                      if(arr[index2] <= min && arr[index2] > prevMin){
                        min = arr[index2];
                     }
                  }
               prevMin = min;
               }
            index++;
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
