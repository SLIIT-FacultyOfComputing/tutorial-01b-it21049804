/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  //variable Declaration
  int sub1M,sub2M;
  float avg;
  printf("Enter subject 1 Mark:\n");
  scanf("%d",&sub1M);
  printf("Enter subject 2 Mark:\n");
  scanf("%d",&sub2M);
//Calculate
avg=(sub1M+sub2M)/2;
printf(" Average Mark of Two marks:%.2f\n",avg);
  return 0;
}

