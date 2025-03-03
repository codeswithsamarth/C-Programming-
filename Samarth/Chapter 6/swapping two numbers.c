# include <stdio.h>
int swap(int* a,int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(void){
    int a = 1,b = 4;
    swap(&a,&b);
    printf("The value of a is %d and the value of b is %d",a,b);
  return 0;
  }