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
      printf("%d ", arr[i]);
   }
   printf("\n");
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

   // Test 1
   int array[4] = {1,2,3,4};  
   printf("TESTING: contains\n");
   if(contains(array, 4, 2) == 1) {
      printf("Passed\n");
   }
   else{
      printf("Failed\n");
   }
   
   // Test 2
   printf("TESTING: contains\n");
   if(contains(array, 4, 5) == 1){
      printf("Passed\n");
   }
   else{
      printf("Failed\n");
   }
   
   // Test 3
   int array2[5] = {3,6,9,12,15}; 
   printf("TESTING: containsWithin\n");   // test containsWithin
   if(containsWithin(array2, 5, 9, 1, 4) == 1){
      printf("Passed\n");
   }
   else{
      printf("Failed\n");
   }
   
   // Test 4
   printf("TESTING: containsWithin\n");
   if(containsWithin(array2, 5, 12, 0, 2) == 1){
      printf("Passed\n");
   }
   else{
      printf("Failed\n");
   }
   
   // Test 5
   int array3[5] = {2, 4, 6, 8, 10};
   printf("TESTING: reverse\n");
   if(reverse
   printf("%d\n", array3[3]); 
   reverse(array3, 5);
   
   int array4[8] = {5, 12, 18, 24, 12, 22, 1, 5};
   printf("%d\n", orderStatistic(array4, 8, 6));
   
   
   return 0;
}
