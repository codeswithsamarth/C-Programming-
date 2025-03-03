# include <stdio.h>
int main(void){
    int marks[10];
    for (int i = 0;i < 5;i++) {
        scanf("%d",&marks[i]);

    }
    for (int i = 0;i < 5;i++) {
        printf("The marks at index %d is %d\n",i,marks[i]);
    }
  return 0;
  }