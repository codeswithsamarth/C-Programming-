# include <stdio.h>
int sum(int*,int*);

int sum(int* a,int* b) {
        *a = 6;
    return *a + *b;
    }


int main(void){
    int x = 1,y = 10;
    printf("The addition is %d\n",sum(&x,&y));
    printf("The value of x is %d\n",x);
    return 0;
}