// Write a program that stores your name in a character array and prints it.

#include <stdio.h>

int main(void)
{

char name[30];

printf("enter your name:");
scanf("%s", name);

printf("hello,  %s\n",name);
}