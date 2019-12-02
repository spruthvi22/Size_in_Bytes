/*
* Author:Pruthvi Suryadevara
* Email: pruthvi.suryadevara@tifr.res.in
* Description: C code to print the size of diferrent data types
* Compiled_output: Size.out
*/

#include<stdio.h>

int main()
{ 
  // Finding the size of data types using sizeof command
  //and printing using printf onto the console
  printf("Size of Char data Type = %li bytes\n",sizeof(char));
  printf("Size of Int data Type = %li  bytes\n",sizeof(int));
  printf("Size of Long Int data Type = %li  bytes\n",sizeof(long int));
  printf("Size of Float data Type = %li  bytes\n",sizeof(float));
  printf("Size of Double data Type = %li  bytes\n",sizeof(double));
}
