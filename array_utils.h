/*
 * Authors: Theo Joseph and Tyler Furst
 * Date: 02/22/2019
 * This program is for practicing use of methods
 */

#include<stdlib.h>
#include<stdio.h>

#include "array_utils.h"

int containsWithin(const int *arr, int size, int x, int i, int j) { // Runs through the array and looks for when a value is the same as x between i and j
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
   for(int i = 0; i < size; i++){ // Runs through the array and looks for when a value is the same as x
      if(arr[i] == x){
         return 1;
      }
   }
  return 0;
}

void reverse(int *arr, int size) {
   //todo
   int tempArr[size];
   for(int i = 0, j = size - 1; i < size; i++,j--){ // Copies the values of the original array from right to left onto 
      tempArr[i] = arr[j];
   }
   for(int i = 0; i < size; i++){ // Copies the temporary array onto the original array
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
               while(arr[index] <= prevMin && index < size - 1){ // Catches if the array element is less than or equal to the previous minimum to avoid using number again
                  index++;
               }
         
               /* 
                * Tests if the current index of the array is greater than the previous minimum value
                * This is necessary because the value of the previous minimum has to be surpassed in order to find
                * the next smallest value.
                */
               if(arr[index] > prevMin){ 
                  min = arr[index];
                  for (int index2 = 0; index2 < size; index2++){ // Searches 
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

   // Test 1: contains
   int array[4] = {1,2,3,4};  
   printf("TESTING: contains\n");
   if(contains(array, 4, 2) == 1) {
      printf("Passed\n");
   }
   else{
      printf("Failed\n");
   }
   
   // Test 2: contains
   printf("TESTING: contains\n");
   if(contains(array, 4, 5) == 0){
      printf("Passed\n");
   }
   else{
      printf("Failed\n");
   }
   
   // Test 3: containsWithin
   int array2[5] = {3,6,9,12,15}; 
   printf("TESTING: containsWithin\n");   // test containsWithin
   if(containsWithin(array2, 5, 9, 1, 4) == 1){
      printf("Passed\n");
   }
   else{
      printf("Failed\n");
   }
   
   // Test 4: containsWithin
   printf("TESTING: containsWithin\n");
   if(containsWithin(array2, 5, 12, 0, 2) == 0){
      printf("Passed\n");
   }
   else{
      printf("Failed\n");
   }
   
   // Test 5: containsWithin
   int array6[8] = {-4, 5, 3, -122, 0, 90, 0, 0};
   printf("TESTING: containsWithin\n");
   if(containsWithin(array6, 8, 0, 3, 6) == 1){
      printf("Passed\n");
   }
   else{
      printf("Failed\n");
   }
   
   // Test 6: containsWithin
   printf("TESTING: containsWithin\n");
   if(containsWithin(array6, 8, 0, 3, 4) == 1){
      printf("Passed\n");
   }
   else{
      printf("Failed\n");
   }
   
   // Test 7: reverse
   int array3[5] = {2, 4, 6, 8, 10};
   printf("TESTING: reverse\n");
   for(int i = 0; i < 5; i++){
      printf("%d ", array3[i]);
   }
   printf("\n");
   reverse(array3, 5);
   
   // Test 8: reverse
   int array5[12] = {1, -3, 4, 10, 250, -67, 14, -25555, 10, 10, 529, -16};
   printf("TESTING: reverse\n");
   for(int i = 0; i < 5; i++){
      printf("%d ", array3[i]);
   }
   printf("\n");
   reverse(array3, 5);
   
   // Test 9: orderStatistic
   int array4[8] = {5, 12, 18, 24, 12, 22, 1, 5};
   printf("TESTING: orderStatistic\n");
   if(orderStatistic(array4, 8, 6) == 24){
      printf("Passed\n");
   }
   else{
      printf("Failed\n");
   }
   
   // Test 10: orderStatistic
   printf("TESTING: orderStatistic\n");
   if(orderStatistic(array4, 8, 1) == 1){
      printf("Passed\n");
   }
   else{
      printf("Failed\n");
   }
   
   // Test 11: orderStatistic
   printf("TESTING: orderStatistic\n");
   if(orderStatistic(array4, 8, 3) == 12){
      printf("Passed\n");
   }
   else{
      printf("Failed\n");
   }
   
   
   return 0;
}
