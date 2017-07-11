/* Name: Project4_sets.c
   Purpose: Reads in two sets of numbers A and B, and calculates and prints
   their union and intersection.
   Author: Philip Rosatone */

#include <stdio.h>
#define N 10

int main(void)
{
	int a[N], b[N];
	int i, j, elements_A, elements_B;

	/* Initializes i */	
	for(i = 0; i < N; i++)
	{
	   a[i] = 0;
	   b[i] = 0;
	}
	
	/* Scans in the number of elements in A and the set */
	printf("Please enter the number of elements in set A: ");
	scanf("%d", &elements_A);
	printf("Enter the numbers in set A: ");

	for(i = 0; i < elements_A; i++)
	{
	   scanf("%d", &j);
	   a[j] = 1;
	}

	/* Scans in the number of elements in B and the set */
	printf("Please enter the number of elements in set B: ");
	scanf("%d", &elements_B);
	printf("Enter the numbers in set B: ");
	
	for(i = 0; i < elements_B; i++)
	{
	   scanf("%d", &j);
	   b[j] = 1;
	}

	printf("The union of sets A and B is: ");
	/* Calculates the union */
	for(i = 0; i < N; i++)
	{
	   if(a[i] == 1)
	   {
	      printf("%d ", i);
	   }	
	}
	for(i = 0; i < N; i++)
	{
	   if(a[i] != 1 && b[i] == 1)
	   {
	      printf("%d ", i);
	   }
	}

	printf("\nThe intersection of sets A and B is: ");
	/* Calculates the intersection */
	for(i = 0; i < N; i++)
	{
	   if(a[i] == 1 && b[i] == 1)
	   {
	      printf("%d ", i);
	   }
	}
	printf("\n");
	return 0;	
}
