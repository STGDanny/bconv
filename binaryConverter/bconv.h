/*
*	FILE			: bconv.h
*	PROJECT			: binaryConverter
*	PROGRAMMER		: Daniel Pieczewski
*	FIRST VERSION	: 2019-11-15
*	DESCRIPTION		:
*		This file is a header file for calculate.c and main.c
*/

#pragma once
#include <stdio.h>
#include <string.h>
#include <math.h>

//Constants
#define MAX_STRING_SIZE 141
#define MAX_RETURN_STRING_SIZE (MAX_STRING_SIZE * 9)

//Function prototypes
char* convertToBinary(char[], char[]);
char* calculate(int val, char[]);
