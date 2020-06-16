//program that uses pointers to set each element of an array to zero//
//Colocate the libraries
#include <stdio.h>
//Start with the maion function
int main(){
//Here i declare de variables
int a[11];//the main variable for an array of 0-10 [11]
int i;//int i for the counter in bucle for
int *pointer;//declare the int pointer
pointer = &a[0];//There we made a redirection of the pointer to the variable

printf("Program that uses pointers to set each element of an array to zero\n\n");

for (i=0;i<=10;i++){//A Bucle for to put pointers until [10]
*pointer=0;//there we put the value 0 to *pointer and also to the variable a
pointer++;
}
printf("The array elements are\n");//Abucle dor to make printof the array

for(i=0;i<11;i++){
printf("a[%d] is %d\n",i,a[i]);
}
return 0;
}

