// A Variable which stores adress of another variable
# include <stdio.h>
int main(void){
  int a = 72;
  int *j = &a; // Here J is Storing address of a j is in integer pointer
  printf("The address of variable is %p\n",&a);
  printf("The address of variable is %p\n",&j);

  return 0;
  }