# include <stdio.h>

int main(void){
    int celsius;
    scanf("%d",&celsius);
    float conversion;
    conversion = (1.8 * celsius)+32;
    printf("The Conversion is %f",conversion);
    return 0;
}