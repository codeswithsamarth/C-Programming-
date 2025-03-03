# include <stdio.h>
int main(void){
    int marks[] = {12,34,55,66};
    int *ptr = &marks[0];
    for (int i = 0;i < 4;i++) {
        printf("The marks at index is %d is %d\n",i,marks[i]);
    }
    return 0;
}