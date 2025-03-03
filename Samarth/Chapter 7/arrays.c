# include <stdio.h>
int main(void){
    int marks[50];
    int average;
    printf("Enter 5 Subject Marks:\n");
    for (int i = 0;i<5;i++) {
        scanf("%d",&marks[i]);
    }
    for (int i = 0;i<5;i++) {
        average += marks[i];
    }
        printf("The average of marks is %d\n",average);
        float percentage = (average)/5.0;
        printf("The percentage of marks is %.2f\n",percentage);

  return 0;
}