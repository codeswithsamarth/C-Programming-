# include <stdio.h>
int returning_5(int* ptr){
    printf("The value of ptr is %d\n",ptr);
    printf("The address of ptr is %d\n",&ptr);
    return 5;

}
int main(void){
    int i = 10;
    int *j = &i;
    returning_5(j);
    printf("The Returning of i is %d\n,%p\n",i,&i);
return 0;
}