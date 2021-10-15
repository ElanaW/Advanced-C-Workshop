#include "Diamond.h"

void PrintTop(int input)
{
	int stars = 1, spaces = input / 2, rows = input / 2;
	for (int i = 0; i < rows; i++)
	{
		//print spaces for each row
		for (int i = 0; i < spaces; i++)
		{
			printf(" ");
		}
		spaces--;
		//print stars for each row
		for (int i = 0; i < stars; i++)
		{
			printf("*");
		}
		stars += 2;
		printf("\n");
	}
}

void PrintMiddle(int input)
{
	//print row of n stars
	for (int i = 0; i < input; i++)
	{
		printf("*");
	}
	printf("\n");
}

void PrintBottom(int input)
{
	int stars = input - 2, spaces=1, rows=input/2;

	for (int i = 0; i < rows; i++)
	{
		//print spaces
		for (int i = 0; i < spaces; i++)
		{
			printf(" ");
		}

		//increment number of spaces for next row
		spaces++;

		//print stars
		for (int i = 0; i < stars; i++)
		{
			printf("*");
		}
		stars -= 2;

		printf("\n");
	}
}