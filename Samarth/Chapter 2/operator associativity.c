// Operator Precedence Works in absense of perenthesis 1st */% 2st +- 3rd =
// Operator associativity left to right (*,/,%)

# include <stdio.h>
int main(void){
  int a = 3;
  int b = 6;
  int c = 9;
  printf("The value of c is %d\n",a*b/c + 7);
  printf("The value of c is  %d \n ",3*b/2*c+7*a);
    //  3*6/2*9= 21
  // 18/2 = 9*9 = 81 + 21
  return 0;
  }