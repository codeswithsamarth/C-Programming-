# include <stdio.h>

int main(void){
  float radius;
  scanf("%f",&radius);
  float height;
  scanf("%f",&height);
  float volume;
  volume = (3.14*(radius*radius)*height);
    printf("%f",volume);
  return 0;
  }