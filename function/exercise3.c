//Create a function named `maximum()` that accepts two integers and returns the larger one.

# include <stdio.h>
 

void maximum(){
    int num1;
    int num2;

 printf("enter a number 1:");
 scanf("%d" ,& num1);

 printf("enter a number 2:");
 scanf("%d" ,& num2);

 if (num1 >num2)
 {
  printf("number 1 : %d is bigger" , num1);
 }
 else
 {
    printf("number 2 : %d is bigger" , num2);
 }
 printf("\n");
}
int main(void)
{
 maximum();
 return 0 ;
 
}