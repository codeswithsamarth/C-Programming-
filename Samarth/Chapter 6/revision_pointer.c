// pointer is a variable which store address of another variable

#include<stdio.h>
int main(void){
    int i = 72;
    int* j = &i;
    int k = 67;
    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);
    printf("The address of k is %p\n",&k);
    printf("The value of address j is %d\n",**(&j));

    char* A = 'a';
    char* s = &A;
    printf("The address of A is %p\n",s);
    float ks = 23;
    float* ks1 = &ks;
    printf("The address of ks is %p\n",ks1);

    int i1 = 6;
    int* j1 = &i;
    int **k1 = &j1;
    int ***k7 = &k1;

    printf("The value of i is %d\n",i1);
    printf("The value of i from j is %d\n",*j1);
    printf("The value of j1 from k1 is %d\n",**k1);
    printf("The value of k1 from k7 is %d\n",***k7);
    return 0;
  }