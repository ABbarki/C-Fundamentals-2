//Create a function named `square()` that accepts an integer and returns its square.
# include <stdio.h>
 
int n;
int s ;
void square(){

  printf("Enter a number:");
  scanf("%d",&n);

  s =n*n;
   
  printf("Square : %d\n", s);

}
int main(){
  square();
  return 0;
}