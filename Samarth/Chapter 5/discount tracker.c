#include <stdio.h>

float calculate_final_price(float price, float discountpercentage)
{
    float discount_amount = (price * discountpercentage) / 100;
    return price - discount_amount;
}

int main(void) {
    float price, discount_percentage;
    printf("Enter The Original Price:\n");
    scanf("%f", &price);
    printf("Enter Discount Percentage:\n");
    scanf("%f", &discount_percentage);

    // Store the result in a variable
    float final_price = calculate_final_price(price, discount_percentage);

    // Print the final price correctly
    printf("The Final Price after discount is %.2f\n", final_price);

    return 0;
}
