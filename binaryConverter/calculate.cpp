#include "bconv.h"

char* convertToBinary(char arr[], char output[]) {
	//For every element in arr[]
	for (unsigned int i = 0; i < strlen(arr); i++) {
		char converted[10] = { 0 };

		//Put the binary conversion of element i into converted[]
		calculate(arr[i], converted);

		//Add converted string on to returnString
		strcat(output, converted);
	}
	return output;
}



char* calculate(int val, char result[]) {
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
	return result;
}