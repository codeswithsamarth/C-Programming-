# include <stdio.h>

int main(void){
  int i = 5;
    i = i + 5;
  printf("The value of i is %d\n",i);
  //i++;
  printf("The value of i at 2nd position is %d\n",i++);
  // i++ print first and then increment i (post increment operator)
  return 0;
  }