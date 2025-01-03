# include <stdio.h>

int main(void) {
  int a = 1,b = 1;
  printf("The value of a and b is %d\n",a&&b);
  printf("The value of a and b is %d\n",a||b);
  printf("The value of not(a) is %d\n",!a);

  if (a && b) {
    printf("Both are true\n");
  }

  if (a) {
    if (b) {
      printf("Both are True\n");
    }
  }
  int income,tax = 0;
  printf("Enter the income %d\n:");
  scanf("%d",&income);

  if (income<250000) {
    printf("No Tax");
  }
  else if (income > 250000 && income < 500000) {
    tax = 0.05 * income - 2500000;
    return tax;

  }

  else if (income > 500000 && income <= 1000000) {
    tax = 0.05 * 500000 - 250000 + 0.2 * income - 250000;
    return tax;
  }
else if (income > 1000000) {
  tax = 0.05 * 500000 - 250000 +
}

































    return 0;

  }