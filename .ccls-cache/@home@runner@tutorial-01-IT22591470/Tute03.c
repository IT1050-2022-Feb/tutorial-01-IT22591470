/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main (void)
{
  //declare variable
	int num,i,sum;

  //take inputs
	printf("Enter the number: ");
	scanf("%d",&num);

  //calculate sum
	for (i=2; i<=num; i++)
	{
		sum = sum + i;
	}

  //print output
	printf("Sum = %d",sum);
	
	return 0;
}

