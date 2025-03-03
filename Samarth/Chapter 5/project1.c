# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(void) {
    int random_number,guess,attempts;
    srand(time(0));
    random_number = (rand() % 100) + 1;
    printf("Welcome to Number Guessing Game:\n");
    printf("Enter The Number Between 1 to 100:\n");
    do {
        printf("Enter The Guess:\n");
        scanf("%d",&guess);
        attempts++;

        if (guess>random_number) {
            printf("The Number is Too High:\n");
        }
        else if (guess<random_number) {
            printf("The Number is Too Low:\n");
        }
        else {
            printf("The Number is Correct Congratulations:\n");
        }
    } while (guess!=random_number);


    return 0;
  }