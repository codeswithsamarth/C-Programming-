# include <stdio.h>
int sum(int,int);

int sum(int a,int b) {
    return a + b;
}

int main(void){
    int a,b,c;
    printf("Enter The value of a & b\n");
    scanf("%d %d",&a,&b);
    c = sum(a,b);
    printf("The addition is %d\n",c);
  return 0;
  }