/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1, mark2, ave;

  printf("Enter marks for two subjects: ");
  scanf("%f %f", &mark1, &mark2);

  ave = (mark1 + mark2)/2.0;

  printf("Average is: %.2f\n", ave);
  
  return 0;
}

