# include <stdio.h>

int main(void){
    int i = 1;
    while(i <= 10) {
        printf("The value of i is %d\n",i);
        i+=1;
    }
    int j = 0,n;
    printf("Enter The value of N:\n");
  //   scanf("%d",&n);
  //   while (j<=n) {
  //       printf("%d\n",j);
  //       j+=1;
  //   }
  //

  // int k = 10;
  //   while (k>=0) {
  //       printf("%d\n",k);
  //       k-=1;
  //   }

    // int even = 2;
    //     while (even<=20) {
    //         printf("%d\n",even);
    //         even+=2;
    //     }

    // int val = 0,sum = 0;
    // while (val<=5) {
    //     sum+=val;
    //     val+=1;
    //     printf("The sum is %d\n",sum);
    //

        int s = 1;
        while (s <= 10) {
            printf("2 * %d = %d\n", s, 2 * s);
            s++;
        }

    // int number,count=0;
    // printf("Enter The Number:\n");
    // scanf("%d",&number);
    // while (number>0) {
    //     number/=10;
    //     count+=1;
    // }
    // printf("The Number of digit is %d",count);

    int num;
    printf("Enter The Number:");
    scanf("%d",&num);
    while (num>0) {
        printf("%d",num%10);
        num/=10;
    }
    printf("\n");



  return 0;
  }