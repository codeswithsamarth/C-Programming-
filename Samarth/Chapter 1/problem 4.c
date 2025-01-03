# include <stdio.h>

int main(void){
  float principal;
  scanf("%f",&principal);
  float rate;
  scanf("%f",&rate);
  float years;
  scanf("%f",&years);
  float interest;
  interest = ((principal*rate*years)/100);
      printf("%f",interest);
  return 0;
  }