#include<stdlib.h>

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
   int prevMin = min;
   for (int iteration = 0; iteration < size; iteration++){  // Used for assignment of the ith value
      for (int j = 0; j < size; j++){ // Used for determining the next ith value
         if (arr[j] < min && arr[j] > prevMin){
            min = arr[j];
         }
      }
   }
   return element;
}

int main(){
   //you may choose to do your testing here
   int array[10] = {1,2,3,4,5,6,7,8,9,10};
   printf("%d", orderStatistic(array, 10, 1));
   return 0;
}
