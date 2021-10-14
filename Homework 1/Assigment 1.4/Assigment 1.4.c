// Assigment 1.4.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

void PrintTop(int input)
{
	int stars = 1, divide = 2, spaces,
		//keeps track of how many rows are necessary for top of traingle
		row = input / 2;
	for (int i = 0; i < row; i++)
	{
		//print spaces
		spaces = input / divide++;
		for (int i = 0; i < spaces; i++)
		{
			printf(" ");
		}

		//print stars
		for (int j = 0; j < stars; j++)
		{
			printf("*");
		}

		//increment "stars" by 2
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
}

void PrintBottom(int input)
{

}



int main()
{
	int input;

	printf_s("Please enter a number\n");
	scanf_s("%d", &input);

	//calling function to print top of diamond
	PrintTop(input);

	//calling function to print middle row
	PrintMiddle(input);


	//new row
	printf("\n");
	//resetting amount of stars needed
	stars = input - 2;
	//resetting amount of spaces needed
	divide--;

	//print bottom triangle
	for (int i = 0; i < row; i++)
	{
		//print spaces
		spaces = input / divide--;
		for (int i = 0; i < spaces; i++)
		{
			printf(" ");
		}

		//print stars
		for (int j = 0; j < stars; j++)
		{
			printf("*");
		}

		//decrement "stars" by 2
		stars -= 2;

		printf("\n");
	}

}