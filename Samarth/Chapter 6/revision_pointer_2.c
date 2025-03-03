# include <stdio.h>
int division(int,int);
int division(int a,int b) {
    if (a||b==0) {
        if (a == 0) {
            a = 5;
        }
        if (b == 0) {
            b = 5;
        }
    }
    return a/b;
}
int sum(int *a,int *b) {
    *a = 13;
    return *a+*b;
}

// int swap(int*,int*);
// int swap(int*a,int* b) {
//     int temp;
//     printf("The value before swap a %d b %d\n",*a,*b);
//     temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("The value after swap a %d b %d\n",*a,*b);
//
// }
int address(int *a) {
    printf("The value of address x is %d\n",*a);
    printf("The address of x is %p\n",(void*)a);
    return *a;
}

void change_to_thirty(int *a) {
    *a = *a * 30;
}
int *sums(int a,int b) {
    int sum = a + b;
    printf("The sum is %d\n",sum);

    int* ptr = &sum;
    return ptr;
}

int* avg(float a,float b) {
    int avg = a+b;
    printf("The avg is %.2f\n",avg);
    int *ptr = &avg;
    return ptr;
}

int changes_to_thirty(int *a) {
    *a*=30;
    return *a;
}

int main(void){
    int x = 2,y = 0,z1 = 10;
    int s = 20;
    int x1 = 10,y1 = 10;
    int c = division(x,y);
    printf("The result of sum func is %d\n",c);
    printf("The sum of a and b is %d\n",sum(&x,&y));
    printf("The value of a is %d\n",x);
    // printf("Enter The value of x and y:\n");
    // scanf("%d %d",&x,&y);
    // int swapped = swap(&x,&y);
    // return swapped;
    printf("-------------------------------------------------------\n");
    printf("The address of x is %p\n",(void*)&z1);
    printf("The value of z1 is %d\n",z1);
    printf("The value of k is %d\n",s);
    change_to_thirty(&s);
    printf("The value of k is %d\n",s);
    int* ptr1 = sums(x1,y1);
    int* ptr2 = avg(x1,y1);
    printf("The address of sums and avg is %u %u\n",ptr1,ptr2);
    int p1 = 10;
    int *p2 = &p1;
    int **p3 = &p2;
    int ***p4 = &p3;
    int amp = 30;
    printf("The value of p1 is %d\n",p1);
    printf("The value of p1 is %d\n",*p2);
    printf("The value of p1 is %d\n",**p3);
    printf("The value of p1 is %d\n",***p4);
    printf("The changes to thirty is %d\n",changes_to_thirty(&amp));
    printf("The value of amp is %d\n",amp);
  return 0;
  }
