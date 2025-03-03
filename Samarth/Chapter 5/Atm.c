# include <stdio.h>

void show_menu() {
    printf("\nWelcome To C Atm\n");
    printf("\nMenu:\n");
    printf("1.Check balance\n");
    printf("2.Deposit Balance\n");
    printf("3.Withdraw Balance\n");
    printf("4.Exit\n");
}

void check_balance(double balance) {
    printf("Your balance is %.2f\n",balance);
}

double deposit_balance(double balance) {
    double amount;
    printf("Enter The Amount To Deposit\n");
    scanf("%lf",&amount);
    if (balance>=0){
        balance += amount;
        printf("The New Balance is %.2f\n",balance);
    }
    else {
        printf("Enter Amount Greater Than Zero\n");
    }
    return balance;
}

double withdraw_balance(double balance) {
    double amount;
    printf("Enter The Amount to Withdraw\n");
    scanf("%lf",&amount);
    if (amount>balance) {
        printf("Insufficient Balance!\n");
    }
    else {
        balance -= amount;
        printf("The New Balance after Withdraw %.2f\n",balance);
    }
    return balance;
}

void Exit() {
    printf("Thanks For Using C Atm Bye!");
}

int main(void) {
    double balance = 10000.0;
    int choice;
    int running = 1;
    while (running) {
        show_menu();
    printf("Enter The Choice:\n");
    scanf("%d",&choice);
        switch (choice) {
            case 1:
                check_balance(balance);
            running = 0;
            break;
            case 2:
                deposit_balance(balance);
            running = 0;
            break;
            case 3:
                withdraw_balance(balance);
            running = 0;
            break;
            case 4:
                Exit();
            running = 0;
            break;
            default:
                printf("Enter Valid choice");
        }
    }
}