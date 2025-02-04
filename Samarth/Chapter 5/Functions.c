# include <stdio.h>
/* Function Declaration with Types
 * In C Programming Known as Function Prototype */

int sum(int,int);

// Function argument passing with its working known as defination

int sum(int x,int y) {
    printf("The Sum of two number is %d\n",x+y);
    return x+y;
}


int prime(int);

int prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2;i<=num/2;i++) {
        if (num % i == 0) {
            printf("The Number is Prime");
        }
        else {
            printf("The Number is Not Prime");
        }
    }
}

void italy();
void america();
void india();

void italy() {
    printf("This is Italy\n");
}

void america() {
    printf("This is America\n");
}
void india() {
    printf("This is India\n");
}
int main(void){
    // int a = 10;
    // int b = 20;
    // int c;
    // c = prime(2);
    india();
    italy();
  return 0;
  }