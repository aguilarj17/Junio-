/*
Exercise 13-2: Write a function that takes a single string as its argument and returns
a pointer to the first nonwhite character in the string
*/
//White space is a space or tab
//Include the libraries
#include <stdio.h>
#include <string.h>

//the funtion to find the non white character
char *nonwhite(char *string){
while((string[0] == ' ') || (string[0] == '\t')){ //Condiion for non white character 

++string;
}
return string;
}
//Main function
int main(){
char line[100];//Variable type char
printf("Insert a string: ");
fgets(line, sizeof(line),stdin);
//To could print the result
printf("Result: %s\n", nonwhite(line));
return(0);
}

