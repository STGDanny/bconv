#include <stdio.h>
#include <string>
#include "bconv.h"

int main(int argc, char* argv[]) {
	//Start infinite loop
	char userInput[MAX_STRING_SIZE] = { 0 };
	char result[MAX_RETURN_STRING_SIZE] = { 0 };

	//Put value from cmd into userInput
	strcpy(userInput, argv[1]);

	//Store the converted string in result[]
	convertToBinary(userInput, result);

	//Print the result
	printf("%s\n", result);

	return 0;
}