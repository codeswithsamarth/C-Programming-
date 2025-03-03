// A Variable which stores adress of another variable
# include <stdio.h>
int main(void){
    char a = 'A';
    char* j = &a; // Here J is Storing address of a j is in integer pointer
    printf("The address of variable is %p\n",&a);
    printf("The address of variable is %p\n",&j);
    float k = 5.322;
    float* k1 = &k;
    printf("The address of variable is %p\n",&k);
    printf("The address of variable is %p\n",k1);

    return 0;
}