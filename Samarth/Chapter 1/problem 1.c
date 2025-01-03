# include <stdio.h>

int main(void) {
    int a,b;
    printf("Enter The Length\n");
    scanf("%d",&a);
    printf("Enter The Value of Breadth \n");
    scanf("%d",&b);
    int c = a * b;
    printf("The Area of Rectangle is %d",c);
    return 0;
}
