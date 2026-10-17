//Ask the user to enter a word and print its length using strlen().
 # include <stdio.h>
 #include <string.h>


int main(void)
{

char name[30];
int length ;

printf("enter your name:");
scanf("%s", name);
length =strlen(name);
printf("hello,  %s\n",name);
printf("your name length is %d.\n", length);

}