//Create a function named `factorial()` that calculates the factorial of a non-negative integer using a loop.

# include <stdio.h>

void factorial()
{

int number;
long long factorial = 1;

printf("enter a non-negative-number:");
 scanf("%d" ,& number);
 if (number<0)
 {
   printf("ther is non factorial .\n");
 }
 else
 {
    for(int i= 1; i <= number ; i++)
    {
      factorial *=i;
    }
  printf("Factorial of %d = %lld\n", number, factorial);
 }
}
int main(void)
{
    factorial();
    return 0 ;
}
