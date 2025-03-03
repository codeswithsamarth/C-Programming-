# include <stdio.h>
int main(void){
  int a = 10;
  int* j = &a;
  int** k = &j;
  printf("The value of a is %d\n",a);
  printf("The value of a1 is %d\n",*j);
  printf("The value of %d\n",**(&j));
  return 0;
  }