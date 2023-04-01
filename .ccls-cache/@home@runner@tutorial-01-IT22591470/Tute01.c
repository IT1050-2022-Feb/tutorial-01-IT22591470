/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) 
{
  //variable declaration 
  int mark1,mark2;
  float sum, average;

  //take inputs from user
  printf("Enter your first mark: ");
  scanf("%d",&mark1);
  printf("Enter second mark: ");
  scanf("%d",&mark2);

  //calculate sum and average
  sum = mark1 + mark2;
  average = sum / 2.0;

  //print the sum and average
  printf("Sum of two marks = %.2f ",sum);
  printf("\n");
  printf("Average = %.2f ",average);
  
  return 0;
}

