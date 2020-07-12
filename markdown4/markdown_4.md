**ARRAYS**

An array is a collection of one or more values of the same type. Each value is called an element of the array. The elements of the array share the same variable name but each element has its own unique index number (also known as a subscript). An array can be of any type, For example: 
int, float, char etc. If an array is of type int then it’s elements must be of type int only.
Arrays can be single or multidimensional. The number of subscript or index determines the dimensions of the array. 
An array of one dimension is known as a one-dimensional array or 1-D array, while an array of two dimensions is known as a two-dimensional array or 2-D array.

[One dimentional array](https://overiq.com/c-programming-101/one-dimensional-array-in-c/)

You can imagine it as one element after the other element.

int num[5]; '5' '6' '8' '8' '10';
float temp[20]; (7, 5, 6 9, 7);
char ch[50];

num is an array of type int, which can only store 100 elements of type int.
temp is an array of type float, which can only store 20 elements of type float.
ch is an array of type char, which can only store 50 elements of type char.

**Accessing to the elementos of an array**

The elements of an array can be accessed by specifying array name followed by subscript or index inside square brackets (i.e []). Array subscript or index starts at 0. If the size of an array is 10 then the first element is at index 0, while the last element is at index 9.
 The first valid subscript (i.e 0) is known as the lower bound, while last valid subscript is known as the upper bound.

Array subscript or index can be any expression that yields an integer value. For example:

int i = 0, j = 2;
my_arr[i]; // 1st element
my_arr[i+1]; // 2nd element
my_arr[i+j]; // 3rd element
In the array my_arr, the last element is at my_arr[4], What if you try to access elements beyond the last valid index of the array?

------------------------------------------------------------------------------------------------------------------------------------------------------------

printf("%d", my_arr[5]); // 6th element
printf("%d", my_arr[10]); // 11th element
printf("%d", my_arr[-1]); // element just before 0
Sure indexes 5, 10 and -1 are not valid but C compiler will not show any error message instead some garbage value will be printed. The C language doesn’t check bounds of the array. It is the responsibility of the programmer to check array bounds whenever required.

#include<stdio.h>
 
int main()
{
    int arr[5], i, s = 0;
 
    for(i = 0; i < 5; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &arr[i]);
    }
 
    for(i = 0; i < 5; i++)
    {
        s += arr[i];
    }
 
    printf("\nSum of elements = %d ", s);
 
    // signal to operating system program ran fine
    return 0;
}

This program sums all the digits of the array



[two dimensional array](https://www.javatpoint.com/two-dimensional-array-in-c#:~:text=%E2%86%92%20%E2%86%90%20prev-,Two%20Dimensional%20Array%20in%20C,relational%20database%20lookalike%20data%20structure.)

The two-dimensional array can be defined as an array of arrays. The 2D array is organized as matrices which can be represented as the collection of rows and columns. However, 2D arrays are created to implement a relational database lookalike data structure. 
It provides ease of holding the bulk of data at once which can be passed to any number of functions wherever required. 

data_type array_name[rows][columns];  

int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};  

#include <stdio.h>    
void main ()    
{    
    int arr[3][3],i,j;     
    for (i=0;i<3;i++)    
    {    
        for (j=0;j<3;j++)    
        {    
            printf("Enter a[%d][%d]: ",i,j);                
            scanf("%d",&arr[i][j]);    
        }    
    }    
    printf("\n printing the elements ....\n");     
    for(i=0;i<3;i++)    
    {    
        printf("\n");    
        for (j=0;j<3;j++)    
        {    
            printf("%d\t",arr[i][j]);    
        }    
    }    
}    


56      10      30  
34      21      34  
45      56      78


**DATA FLOWS**

[DATA FLOWS and PROPiERTIES](https://books.google.com.mx/books?id=ukSqCAAAQBAJ&pg=PA364&lpg=PA364&dq=concepts+and+characteristics+of+dataflow&source=bl&ots=xxgrRxTQEb&sig=ACfU3U34hf1rJu9EO77aZomJXPBDFwtEcw&hl=es&sa=X&ved=2ahUKEwi3gsu7osjqAhWBhOAKHcHNByIQ6AEwCHoECAsQAQ#v=onepage&q=concepts%20and%20characteristics%20of%20dataflow&f=false)

Dataflow programming is a programming paradigm that models a program as a directed graph of the data flowing between operations, thus implementing dataflow principles and architecture. Dataflow programming languages share some features of functional languages, and were generally developed in order to bring some functional concepts to a language more suitable for numeric processing. 
Some authors use the term datastream instead of dataflow to avoid confusion with dataflow computing or dataflow architecture, based on an indeterministic machine paradigm

**propierties***

Emphasizes the movement of data and models programs as a series of connections. Explicitly defined inputs and outputs connect operations, which function like black boxes. An operation runs as soon as all of its inputs become valid.
Thus, dataflow languages are inherently parallel and can work well in large, decentralized systems

 Dataflow programs start with an input, perhaps the command line parameters, and illustrate how that data is used and modified. The flow of data is explicit, often visually illustrated as a line or pipe.

[FILES](https://blogs.helsinki.fi/students-digital-skills/1-introduction-to-the-use-of-computers/1-2-files-and-directories/features-of-files-and-directories/)

**FILES**

A file refers to data stored on a hard drive or other storage media as a separate entity. For example, you would usually save a thesis or a slide presentation or a photograph as a file. Files typically have the following characteristics:
A file always has a name.
A file always takes up storage space.
A file is always saved in a certain format: a body of text is saved in one of the many text file formats, a photo in one of the many image file formats, etc.
A file contains information on when it was created and when it was last modified.
Files usually have access rights, especially if they are online.

[Text file](https://www.computerhope.com/jargon/t/textfile.htm)

A text file is a computer file that only contains text and has no special formatting such as bold text, italic text, images, etc. With Microsoft Windows computers text files are identified with the .txt file extension, as shown in the example picture.
An example of a text file and ASCII art can be seen in Kirk text file. You can click this link to open the .txt file in your browser or right-click the file to save the text file to your computer.

How to open a text file?

A text file can be opened in any text editor or word processor. For example, in Microsoft Windows you could use the Notepad program to open, view, and edit text files.

[Binaries file](https://whatis.techtarget.com/definition/binary-file)

A binary file is a file whose content must be interpreted by a program or a hardware processor that understands in advance exactly how it is formatted. That is, the file is not in any externally identifiable format so that any program that wanted to could look for certain data at a certain place within the file. A progam (or hardware processor) has to know exactly how the data inside the file is laid out to make use of the file.

In general, executable (ready-to-run) programs are often identified as binary files and given a file name extension of ".bin". Programmers often talk about an executable program as a "binary" and will ask another programmer to "send me the binaries." (A synonym for this usage is object code .) A binary file could also contain data ready to be used by a program.
In terms of transmitting files from one place to another, a file can be transmitted as a "binary," meaning that the programs handling it don't attempt to look within it or change it, but just pass it along as a "chunk of 0s and 1s," the meaning of which is unknown to any network device.





**C File Managment**

A File can be used to store a large volume of persistent data. Like many other languages 'C'provides following file management functions:

Creation of a file
Opening a file
Reading a file
Writing to a file
Closing a file

**File management functions**

FUNCTION				PURPOSE
fopen () 				[Creating a file or opening an existing file] 
fclose () 				[Closing a file] 
fprintf () 				[Writing a block of data to a file]
fscanf () 				[Reading a block data from a file] 
getc () 				[Reads a single character from a file] 
putc () 				[Writes a single character to a file] 
getw () 				[Reads an integer from a file]
putw () 				[Writing an integer to a file]
fseek () 				[Sets the position of a file pointer to a specified location] 
ftell () 				[Returns the current position of a file pointer]
rewind () 				[Sets the file pointer at the beginning of a file]  

**CREATION**

To create a file in a 'C' program following syntax is used:
___________________________________________
FILE *fp;
fp = fopen ("file_name", "mode");
___________________________________________

The FILE is a data structure which is defined in the standard library. 

fp is a file pointer which points to the type file

fopen is a standard function which is used to open a file. 
If the file is not present on the system, then it is created and then opened.
If a file is already present on the system, then it is directly opened using this function.
-------------------------------------------------------------------------------------------------------------------------------
A file in 'C' programming can be created or opened for reading/writing purposes.A mode is used 
to specify whether you want to open a file for any of the below-given purposes. Following are 
the different types of modes in 'C' programming which can be used while working with a file. 

File Mode 
"r" 
Open a file for reading. If a file is in reading mode, then no data is deleted if a file is already 
present on a system. 

"w" 
Open a file for writing. If a file is in writing mode, then a new file is created if a file doesn't 
exist at all. If a file is already present on a system, then all the data inside the file is truncated, 
and it is opened for writing purposes. 

"a" 
Open a file in append mode. If a file is in append mode, then the file is opened. The content within the 
file doesn't change. 

"r+" 
open for reading and writing from beginning 

"w+" 
open for reading and writing, overwriting a file 

"a+" 
open for reading and writing, appending to file 

they must always be enclosed within double quotes " "
-----------------------------------------------------------------------------------------------------------------------------------

Example;

#include <stdio.h>

int main() {
FILE *fp;
fp  = fopen ("data.txt", "w");
}

data.txt is created in the same folder where you have saved your code. 
"w" open a file for writing

**CLOSE A FILE**

One should always close a file whenever the operations on file are over. It means the contents and links to the file are terminated. This prevents accidental damage to the file

'C' provides the fclose function to perform file closing operation. The syntax of fclose is as follows:


**fclose (file_pointer)**
________________________________________________

EXAMPLE

FILE *fp;
fp  = fopen ("data.txt", "r");
fclose (fp);
_________________________________________________

The fclose function takes a file pointer as an argument. The file associated with the file pointer is then closed with the help of fclose function. It returns 0 if close was successful 
and EOF (end of file) if there is an error has occurred while file closing. 

After closing the file, the same file pointer can also be used with other files. 


**WRITING FILE**

In C, when you write to a file, newline characters '\n' must be explicitly added. 

The stdio library offers the necessary functions to write to a file:

fputc(char, file_pointer): It writes a character to the file pointed to by file_pointer. 

fputs(str, file_pointer): It writes a string to the file pointed to by file_pointer. 

fprintf(file_pointer, str, variable_lists): It prints a string to the file pointed to by file_pointer. 

The string can optionally include format specifiers and a list of variables variable_lists.

The program below shows how to perform writing to a file: 
_____________________________________________________________

**fputs () Function**

#include <stdio.h>
int main() {
        FILE * fp;
        fp = fopen("fputs_test.txt", "w+");
        fputs("This is how to wirte in a file,", fp);
        fputs("We don't need to use for loop\n", fp);
        fputs("Easier than fputc function\n", fp);
        fclose(fp);
        return (0);
    }

OUTPUT
This is how to write in  file, we don´t need to use for loop
Easier that fputc function

In the above program, we have created and opened a file called fputs_test.txt in a write mode.
After we do a write operation using fputs() function by writing three different strings 
Then the file is closed using the fclose function.
____________________________________________________________

**fprintf()Function**

#include <stdio.h>
    int main() {
        FILE *fptr;
        fptr = fopen("fprintf_test.txt", "w"); // "w" defines "writing mode"
        /* write to file */
        fprintf(fptr, "Learning C\n");
        fclose(fptr);
        return 0;
    }

OUTPUT:

Learning C

In the above program we have created and opened a file called fprintf_test.txt in a write mode.
After a write operation is performed using fprintf() function by writing a string, then the file is closed using the fclose function.


**READING DAT FORM A FILE**

There are three different functions dedicated to reading data from a file 

fgetc(file_pointer): It returns the next character from the file pointed to by the file pointer. 
		     When the end of the file has been reached, the EOF is sent back. 

fgets(buffer, n, file_pointer): It reads n-1 characters from the file and stores the string in a 
				buffer in which the NULL character '\0' is appended as the last character. 

fscanf(file_pointer, conversion_specifiers, variable_adresses): It is used to parse and analyze data. 
			It reads characters from the file and assigns the input to a list of variable 
			pointers variable_adresses using conversion specifiers. Keep in mind that as with 
			scanf, fscanf stops reading a string when space or newline is encountered.
__________________________________________________

The following program demonstrates reading from fputs_test.txt file using fgets(),fscanf() and fgetc () 
functions respectively : 

#include <stdio.h>

int main() {
        FILE * file_pointer;
        char buffer[30], c;

        file_pointer = fopen("fprintf_test.txt", "r");
        printf("----read a line----\n");
        fgets(buffer, 50, file_pointer);
        printf("%s\n", buffer);

        printf("----read and parse data----\n");
        file_pointer = fopen("fprintf_test.txt", "r"); //reset the pointer
        char str1[10], str2[2], str3[20], str4[2];
        fscanf(file_pointer, "%s %s %s %s", str1, str2, str3, str4);
        printf("Read String1 |%s|\n", str1);
        printf("Read String2 |%s|\n", str2);
        printf("Read String3 |%s|\n", str3);
        printf("Read String4 |%s|\n", str4);

        printf("----read the entire file----\n");

        file_pointer = fopen("fprintf_test.txt", "r"); //reset the pointer
        while ((c = getc(file_pointer)) != EOF) printf("%c", c);

        fclose(file_pointer);
        return 0;
    }


RESULT:

----read a line----
Learning C with Guru99

----read and parse data----
Read String1 |Learning|
Read String2 |C|
Read String3 |with|
Read String4 |markdown|
----read the entire file----
Learning C with markdown

In the above program, we have opened the file called "fprintf_test.txt" which was previously written using fprintf() function, and it contains "Learning C with Guru99" string. We read it using the fgets() 
function which reads line by line where the buffer size must be enough to handle the entire line.

We reopen the file to reset the pointer file to point at the beginning of the file. Create various strings variables to handle each word separately. Print the variables to see their contents. The 
fscanf() is mainly used to extract and parse data from a file.

Reopen the file to reset the pointer file to point at the beginning of the file. Read data and print it from the file character by character using getc() function until the EOF statement is encountered 

After performing a reading operation file using different variants, we again closed the file using 
the fclose function.
_____________________________________________________________________________________________________________

Interactive File Read and Write with getc and putc
These are the simplest file operations. Getc stands for get character, and putc stands for put character. These two functions are used to handle only a single character at a time. 
Following program demonstrates the file handling functions in 'C' programming: 

#include <stdio.h>

int main() {
        FILE * fp;
        char c;
        printf("File Handling\n");
        //open a file
        fp = fopen("demo.txt", "w");
        //writing operation
        while ((c = getchar()) != EOF) {
            putc(c, fp);
        }
        //close file
        fclose(fp);
        printf("Data Entered:\n");
        //reading
        fp = fopen("demo.txt", "r");
        while ((c = getc(fp)) != EOF) {
            printf("%c", c);
        }
        fclose(fp);
        return 0;
    }

OUTPUT:

File Handling
Programmin C
^Z
Data Entered:
Programming C

In the above program we have created and opened a file called demo in a write mode.

After a write operation is performed, then the file is closed using the fclose function.

We have again opened a file which now contains data in a reading mode. A while loop will 
execute until the eof is found. Once the end of file is found the operation will be 
terminated and data will be displayed using printf function.

After performing a reading operation file is again closed using the fclose function.
