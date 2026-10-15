// Create a function named `isEven()` that returns `is even` if a number is even and `is odd` otherwise.
# include <stdio.h>

int number;

void isEven() 
{

 printf("enter a number:");
 scanf("%d" ,& number);

 if (number %2 == 0)
 {
   printf("%d is even.\n", number);
 }
 else {
    printf("%d is odd.\n", number);
 }

}
int main(void )
{
    isEven();
    return 0;
}