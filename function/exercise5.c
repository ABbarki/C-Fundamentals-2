// Create a calculator using separate functions for addition, subtraction, multiplication, and division.

# include <stdio.h>

int a;
int b;
char o;

void addition()
{
    printf("%d",a+b);
} 
void subtraction()
{
    printf("%d",a-b);
} 
void multiplication()
{
    printf("%d",a*b);
} 
void division()
{
    if (b != 0) {
        printf("%d", a / b);
    } else {
        printf("Error: Division by zero!");
    }
} 
int main( void)
{
 printf("enter a number:");
 scanf("%d" ,& a);

 printf("enter a number:");
 scanf("%d" ,& b);

 printf("enter a operation:");
 scanf(" %c" ,&o);

 if (o == '+')
 {
    addition();
 }
 else if (o =='-')
 {
    subtraction();
 }
 else if (o =='*')
 {
    multiplication();
 }
 else if (o =='/')
 {
    division();
 }
 else
 { 
    printf("invalid operation.");
 }
 printf("\n");
 return 0;
}