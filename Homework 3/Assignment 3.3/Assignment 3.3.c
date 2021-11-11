// Assignment 3.3.c
//Elana Weiss 341390961

#include <stdio.h>
#pragma warning(disable : 4996)
#include "Series.h"

int main()
{
	int position;
	printf("Please enter a number \n");
	scanf("%d",&position);
	if (position <=0)
	{
		printf("ERROR \n");
	}
	else
	{
		printf("%d",Fibonacci(position));
	}
}
