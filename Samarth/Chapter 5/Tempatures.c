# include <stdio.h>

double celsius_to_farhenit(double celsius) {
    return (1.8*celsius)+32;
}

double farenhiet_to_celsius(double farenhiet) {
    return (farenhiet-32)*5/9;
}

void get_input(double *temperature,int *choice) {
    printf("Enter The Choice:\n");
    printf("1.Celsius To Farenhiet:\n2.Fatenhiet to Celsius:");
    scanf("%d",&*choice);

    if (*choice == 1) {
        printf("Enter The temperature in celsius:\n");
    }
    else {
        printf("Enter Temperature in Farenhiet\n");
    }
    scanf("%lf",temperature);

}

void display_result(double converted_temp,int choice) {
    if (choice == 1) {
        printf("Temperature in farhenit: %.2f\n",converted_temp);
    }
    else if (choice == 2){
        printf("Temperature in celsius: %.2f\n",converted_temp);
    }


}


int main(void) {
    double tempature,converted;
    int choice;
    get_input(&tempature,&choice);
    if (choice == 1) {
       converted =  celsius_to_farhenit(tempature);
    }
    else {
        converted = farenhiet_to_celsius(tempature);
    }
    display_result(converted,choice);
    return 0;
}