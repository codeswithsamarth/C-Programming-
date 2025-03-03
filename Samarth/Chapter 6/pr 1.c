#include<stdio.h>
int main(void) {
    int a = 10;
    int* a1 = &a;
    printf("The address of a is %u\n",a1);
    printf("The value of address is %d",*a1);
    return 0;
}