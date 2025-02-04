# include <stdio.h>

int factorial(int);

int factorial(int num) {
  if (num == 0 || num == 1) {
    return 1;
  }
  else{
    return num * factorial(num-1);
  }
}
int main(void){
  int result;
  result = factorial(5);
  printf("%d",result);
  return 0;
}