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

	//Run error checking
	switch (errorCheck(argc, argv[1])) {
	case(1):
		//Everything is OK, continue with program
		break;
	case(0):
		//If the user entered more than one string:
		printf("\n\tMore than one string entered, ignoring the second one.\n");
		//Continue with program
		break;
	case(-1):
		//If the user didn't enter an argument:
		printf("\n\tError! You must enter a string to convert!\n");
		printf("\n\tUsage: bconv <string to convert>\n");
		//Exit the program early
		return -1;
	case(-2):
		//If the user entered a string too large:
		printf("\n\tError! The input string must be less than 140 characters\n");
		//Exit the program early
		return -1;
	}

	//This code will only execute if errorCheck returned 1 or 0.
	//Put value from cmd into userInput
	strcpy_s(userInput, MAX_STRING_SIZE, argv[1]);

	//Tell convertToBinary store the converted string in result[]
	convertToBinary(userInput, result);

	//Print the result
	printf("\n\t%s\n", result);

	//End program
	return 0;
}



/*
*	FUNCTION		: errorCheck
*	DESCRIPTION		: Checks for any errors in the amount of arguments passed to the program.
*
*	PARAMETERS		:
*	int argc	    : Number of command line arguments passed to main
*	char argv[]		: String entered from the command line
*
*	RETURNS			:
*	int 		    : Status code
*/
int errorCheck(int argc, char argv[]) {
	//If the user entered more than one argument:
	if (argc > 2) {
		//Continue with program, but warn the user.
		return 0;
	}
	//If the user did not enter an argument
	else if (argc == 1) {
		//Send an exit command to main()
		return -1;
	}
	//If the argument is larger than the max size:
	else if (strlen(argv) > MAX_STRING_SIZE) {
		//Send exit code to main()
		return -2;
	}
	//Nothing wrong:
	else {
		//No errors found
		return 1;
	}
}