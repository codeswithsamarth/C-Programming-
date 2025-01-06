# include <stdio.h>

int main(void){
    int i = 0;
    do {
        printf("The value of i is %d\n",i);
        i+=1;
    }
        while (i<=4);
    int j = 0,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    do {
      printf("The Natural Number is %d\n",j);
        j++;
    }
    while (j<=n);
  return 0;
  }