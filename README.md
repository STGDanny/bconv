# bconv - Binary Converter cmd Utility
Small utility to translate ASCII text to binary.

Source code is 100% C and just under 170 lines.

## Instructions
You will need to compile this yourself.

Adding the resulting file to your path will let you use the command from any command window.

## Usage
This utility only accepts one string as input at a time.
Adding whitespace between arguments will make the utility ignore anything but the first string.
By default this will only accept strings 140 characters long or less.

 - If you added the command to your path:
	- Call bconv followed by the string you want to translate, like this:

		``` 
		bconv "Hello World!" 
		``` 

 - Alternatively:
	- Navigate to the folder containing the file.
	- Call the file followed by the string you want to translate.


## Dependencies
 - C standard library
 - math.h
 - string.h
