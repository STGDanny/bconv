/*
*	FILE			: calculate.c
*	PROJECT			: binaryConverter
*	PROGRAMMER		: Daniel Pieczewski
*	FIRST VERSION	: 2019-11-15
*	DESCRIPTION		:
*		This file handles all the calculations that main.c needs for I/O.
*/

#include "bconv.h"

/*
*	FUNCTION		: convertToBinary
*	DESCRIPTION		: Stores the resulting octet received from calculate() in the return string
*					  one octet at a time until the input string is done
*	PARAMETERS		:
*	char arr[]	    : String to convert (ASCII Text)
*	char output[]	: String to put the complete string into (Binary)
*
*	RETURNS			:
*	void		    : void
*/
void convertToBinary(char arr[], char output[]) {
	//For every element in arr[]
	for (size_t i = 0; i < strlen(arr); i++) {
		char converted[10] = { 0 };

		//Put the binary conversion of element i into converted[]
		calculate(arr[i], converted);

		//Add converted string on to returnString
		strcat_s(output, MAX_RETURN_STRING_SIZE, converted);
	}
}



/*
*	FUNCTION		: calculate
*	DESCRIPTION		: Takes a char value from the input string and converts it to
*					  a binary octet and returns it as a string to the calling function.
*	PARAMETERS		:
*	int val		    : Integer representation of a char in the original input string
*	char result[]	: Output string one octet long
*
*	RETURNS			:
*	void		    : void
*/
void calculate(int val, char result[]) {
	//For every bit in an octet
	for (int i = 7; i >= 0; i--) {
		//If value is greater or equal to 2^i (powers of 2 up to 128)
		if (val >= pow(2, i)) {
			//Set bit[i] to 1 and decrement val
			result[7 - i] = '1';
			val -= (int)pow(2, i);
		}
		//If less than 2^i
		else {
			//Set bit[i] to 0
			result[7 - i] = '0';
		}
	}

	//Add a space to end of octet
	result[8] = ' ';
}