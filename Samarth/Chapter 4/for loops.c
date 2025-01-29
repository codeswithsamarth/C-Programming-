# include <stdio.h>
#include <string.h>
int main(void){
  int n = 6;
  for (int i = 0;i<=n;i++) {
      printf("The value of i is %d\n",i);
  }
  int num = 10;
    for (int j = 1;j<num;j++) {
        printf("The value of j is %d\n",j);
    }

    int even = 20;
    for (int l = 2;l<=even;l+=2)
        printf("The value of L is %d\n",l);

    int five = 50;
    for (int f = 5;f<=five;f+=5)
        printf("The value of f is %d\n",f);

    int sum = 0;
    for (int sums = 1;sums<=10;sums++)
        sum+=sums;
    printf("The Sum of Number is %d\n",sum);

    // int factorial,predefine=1;
    // printf("Enter The value to check factorial:\n");
    // scanf("%d",&factorial);
    // for (int fact = 1;fact<=factorial;fact++)
    //     predefine*=fact;
    // printf("The value of factorial is %d\n",predefine);
    //
    //
    for (char c = 'A';c<='z';c++)
        printf("%c",c);

    for (int step = 3;step<=30;step+=3)
        printf("The value of step of 3 is %d\n",step);

    char name[] = "Samarth";
    for (int i = strlen(name)-1;i>0;i--)
        printf("%c",name[i]);

    int n_ = 2, isprime = 1;
    for (int i = 2;i<=n_/2;i++)
        if (n%i==0){
            isprime = 0;
        }
    printf(isprime?"Prime\n":"Not Prime\n");








  return 0;
  }