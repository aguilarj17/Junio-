// Program in c to change whitespace by "_"
#include <stdio.h>
#include <stdlib.h>

const char text[] = "insert.txt";
const char print[] = "result.txt";

int main(){

FILE * text_ptr;
FILE * print_ptr;

char ch[100];
char semi;
text_ptr = fopen(text, "r");
	if(text_ptr == NULL){
	printf("Error! The read File isn't open\n");
	return (8);
	}
print_ptr = fopen(print, "w+");
	if(print_ptr == NULL){
	printf("Error! The program can not open the file");
	return (8);
	}
ch = fgetc(text_ptr);
semi = '_';
while (ch != EOF){
	fputc(ch, print_ptr);
	if(ch == ' '){
	fputc(semi,print_ptr);
	}

}
fclose(text_ptr);
fclose(print_ptr);
return 0;
}

