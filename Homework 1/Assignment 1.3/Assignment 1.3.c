// Assignment 1.3.c : This file contains the 'main' function, 
//and function which determines the amount of letters in a word. 
//Program execution begins and ends with 'main' function.
//Elana Weiss, 341390961

#include <stdio.h>
#pragma warning(disable : 4996)
#include <stdio.h>
#include "Length.h"

//user enters a word and program prints length of word
int main()
{
	char word[50];
	scanf("%s",&word);
	printf("The length of the word is %d", WordLength(word));
}