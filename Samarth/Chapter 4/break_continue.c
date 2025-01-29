//
// Created by Samarth on 24-01-2025.
//


# include <stdio.h>

int main(void) {
    for (int i = 0;i<15;i++) {
        if (i%2!=0) {
            continue;
        }
        printf("The value of i is %d\n",i);


        // int n;
        // printf("Enter The value of N:\n");
        // scanf("%d",&n);
        // for (int i = 10;i;i--) {
        //     printf("%d * %d = %d\n",n,i,n*i);
        }

        // int num = 0,value = 0;
        // while (value<=5) {
        //     num+=value;
        //     value+=1;
        // }
        // printf("The Sum is %d\n",num);
        //

    int nums;
    for (int i = 1;i<=10;i++) {
        nums+=i;
        printf("The value of nums is %d\n",nums);
    }
    int num = 1,sum=0;
    do {
        sum+=num;
        num+=1;
    }while (sum<=10);
    printf("The value of first 10 natural number is %d\n",sum);


    // int number,total = 1;
    // printf("Enter The value of Number:\n");
    // scanf("%d",&number);
    // for (int k = 1;k<=10;k++) {
    //     printf("%d * %d = %d\n",number,k,number*k);
    //     total+=number;
    //     printf("The total is %d\n",total);
    // }
    // int number,factorial = 1;
    //  printf("Enter Number To Check\n");
    //  scanf("%d",&number);
    //  while (number>1) {
    //      factorial*=number;
    //      number--;
    //  }
    //      printf("The factorial is %d\n",factorial);

    int numbers,prime=2,isprime=1;
    printf("Enter Number To Check\n");
    scanf("%d",&numbers);
    while (prime*prime<=num) {
        if (num%prime==0) {
            int val = isprime = 0;
            break;
            prime+=1;
            if (val) {
                printf("Prime");
            }
            else {
                printf("Not a Prime");
            }
        }
    }











            return 0;
        }






