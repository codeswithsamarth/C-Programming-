# include <stdio.h>
int main(void){
    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n",&a);
    printf("The address of a is %u\n",ptr);
    ptr+=2;
    printf("The address of a is %u\n",ptr);

    char b = 'c';
    char* b1 = &b;
    printf("The address of b is %u\n",&b);
    printf("The address of b is %u\n",b1);
    b1+=2;
    printf("The address of b is %u\n",b1);


  return 0;
  }