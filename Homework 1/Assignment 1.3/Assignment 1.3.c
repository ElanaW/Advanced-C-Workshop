// Assignment 1.3.c : This file contains the 'main' function, 
//and function which determines the amount of letters in a word. 
//Program execution begins and ends with 'main' function.
//Elana Weiss, 341390961

#include <stdio.h>
#include "Length.h"



int main()
{
	char *word="hello world";
	printf_s("The length of the word is %d", WordLength(word));
}