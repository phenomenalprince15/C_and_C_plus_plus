/*
A string in C is an array of characters that ends with a NULL character '\0'.
A string declaration can be made in several ways, each with its own considerations.

char str_name[str_len] = "string";
char str = "hello" // size = 6
char str[5] = {'f','d','e','\0'};

A string pointer declaration such as char *str = "stuff";
is considered a constant and cannot be changed from its initial value.

To safely and conveniently operate with strings, you can use the Standard Library string functions shown below. Don't forget to include <string.h>.
strlen() - get length of a string
strcat() - merge two strings
strcpy() - copy one string to another
strlwr() - convert string to lower case
strupr() - convert string to upper case
strrev() - reverse string
strcmp() - compare two strings

Reading inputs :
- scanf() ---> terminate when encounter a space
- gets() ---> read until enter key
- fgets() ---> fgets(string,size_to_read,stdin) -> (prevents buffer overflow)
fgets() reads only n-1 characters from stdin because there must be room for '\0'.

Outputs :
String output is handled with the fputs(), puts(), and printf() functions.
The fputs() requires the name of the string and a pointer to where you want to print the string.
To print to the screen, use stdout which refers to the standard output.
- The puts() function takes only a string argument and can also be used to display output.
  However, it adds a newline to output.

- sprintf(string_name,"the new string %s has %d size",str,size)
- sscanf(string_name,"%s %d",str,size)

* string.h header files

strlen(str) Returns the length of the string stored in str, not including the NULL character.
strcat(str1, str2) Appends (concatenates) str2 to the end of str1 and returns a pointer to str1.
strcpy(str1, str2) Copies str2 to str1. This function is useful for assigning a string a new value.
strncat(str1, str2, n) Appends (concatenates) first n characters of str2 to the end of str1 and returns a pointer to str1.
strncpy(str1, str2, n) Copies the first n characters of str2 to str1.
strcmp(str1, str2) Returns 0 when str1 is equal to str2, less than 0 when str1 < str2, and greater than 0 when str1 > str2.
strncmp(str1, str2, n) Returns 0 when the first n characters of str1 is equal to the first n characters of str2, less than 0 when str1 < str2, and greater than 0 when str1 > str2.
strchr(str1, c) Returns a pointer to the first occurrence of char c in str1, or NULL if character not found.
strrchr(str1, c) Searches str1 in reverse and returns a pointer to the position of char c in str1, or NULL if character not found.
strstr(str1, str2) Returns a pointer to the first occurrence of str2 in str1, or NULL if str2 not found.

* The stdio.h library contains the following functions for converting a string to a number:
- int atoi(str) Stands for ASCII to integer. Converts str to the equivalent int value. 0 is returned if the first character is not a number or no numbers are encountered.
- double atof(str) Stands for ASCII to float. Converts str to the equivalent double value. 0.0 is returned if the first character is not a number or no numbers are encountered.
- long int atol(str) Stands for ASCII to long int. Converts str to the equivalent long integer value. 0 is returned if the first character is not a number or no numbers are encountered.

* Array of strings :
- char trip[3][15] = {
  "suitcase",
  "passport",
  "ticket"
};
*/


