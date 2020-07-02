//include the labraries
#include <stdio.h>
#include <stdlib.h>
//Define the constant of .txt file
const char text[] = "first.txt";
const char result[] = "second.txt";
//The main function of the program
int main()
{
    FILE *text_ptr;//Declare the FILE pointers
    FILE *result_ptr;
//Declare chars
    char ch;
//Open the file  and aig if if for write "w" or for read "r"
    text_ptr  = fopen(text, "r");
    result_ptr    = fopen(result, "w");
//Verify if the pointer is NULL
    if (text_ptr == NULL || result_ptr == NULL)
    {
        printf("\nError in  the  read file .\n");
        exit(EXIT_FAILURE);
    }

//ASig a char to read characcter by character
    ch = fgetc(text_ptr);
    while (ch != EOF)
    {
        // Write to destination file
        fputc(ch, result_ptr);
        ch = fgetc(text_ptr);
    }
    printf("\nFiles copied successfully.\n");

    // Finally close files to release resources
    fclose(text_ptr);
    fclose(result_ptr);

    return 0;
	}
