# include <stdio.h>
int main(void){
    int num = 10;
    int *ptr = &num;
    printf("The Value of pointer is %u\n",ptr);
    ptr+=2;
    printf("The addition of pointer is %u\n",ptr);
    ptr-=2;
    printf("The substraction of pointer is %u\n",ptr);

    int a = 10,b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;
    printf("The pointer addition is %ld\n",*ptr1+*ptr2);


    int x = 30;
    float y = 40;
    int *ptr3 = &x;
    int *ptr4 = &y;

    if (ptr3 > ptr4 ) {
        if (ptr3 == ptr4) {
            printf("The both pointer are equal");
        }
        else {
            printf("The ptr3 is greater %u\n",ptr3);
        }
    }
    else {
        printf("The ptr4 is greater %u\n",ptr4);
    }

    printf("The ptr3 is %u\n The ptr4 is %u\n",ptr3,ptr4);
    return 0;

  }