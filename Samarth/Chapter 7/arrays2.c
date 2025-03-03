# include <stdio.h>
int main(void) {
    int num[05];
    int sum;
    printf("Enter The Marks\n");
    for (int i = 0;i<5;i++) {
        scanf("%d",&num[i]);
    }
    for (int i = 0;i<5;i++) {
        sum += num[i];
    }
    printf("The Sum is %d\n",sum);
    return 0;
  }