/*
*	FILE			: main.c
*	PROJECT			: binaryConverter
*	PROGRAMMER		: Daniel Pieczewski
*	FIRST VERSION	: 2019-11-15
*	DESCRIPTION		:
*		This file is the driver code for the utility. It takes input from the command line
*		and sends it off to the other functions in the project.
*/

#include "bconv.h"

int main(int argc, char* argv[]) {
	char userInput[MAX_STRING_SIZE] = { 0 };
	char result[MAX_RETURN_STRING_SIZE] = { 0 };

	//Put value from cmd into userInput
	strcpy_s(userInput, MAX_STRING_SIZE, argv[1]);

	//Tell convertToBinary store the converted string in result[]
	convertToBinary(userInput, result);

	//Print the result
	printf("\n%s\n", result);

	return 0;
}