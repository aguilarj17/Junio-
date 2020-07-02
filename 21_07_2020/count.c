#include <stdio.h>
#include <stdlib.h>
//Program in c to read the numbers of charcters, lines and words

//Declare my constant of the txt
const char counter[100] = "text.txt";
//Star the main function
int main()
{
//Declare the pointer in FILE
    FILE * file;
//Declare the variables
    char ch;
    int characters, words, lines;
//open the constant of the txt
    file = fopen(counter, "r");

//Verify is the file is NULL
    if (file == NULL)
    {
        printf("\nError the read file is unable to open .\n");
  exit(EXIT_FAILURE);
    }

 characters = 0;
 words = 0;
 lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        // Check new line 
        if (ch == '\n')
            lines++;

        // Check words
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }


    //Print hte results
    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);
  //Close the file
    fclose(file);

    return 0;
}
