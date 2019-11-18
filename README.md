# bconv - Binary Converter cmd Utility
Small utility to translate ASCII text to binary
Source code is 100% C and just over 60 lines.

## Instructions
You will need to compile this yourself, I have included a VS solution if that helps.
You can also use gcc or clang, up to you

Adding the resulting exe to your path will let you use the command from any cmd window.

## Usage
 - If you added the command to your path:
	- Call bconv followed by the string you want to translate, like this:
		``` 
		bconv "Hello World!" 
		``` 
		For strings with multiple words
		```
		bconv Hello 
		```
		For single words
 - Alternatively:
	- Navigate to the folder containing the exe
	- Call bconv.exe followed by the string you want to translate


## Dependencies
 - C standard library
 - math.h
 - string.h