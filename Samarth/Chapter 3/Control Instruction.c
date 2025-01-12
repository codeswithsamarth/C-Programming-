// Decision making if else if condition == 0 r 1
// type if else and switch

# include <stdio.h>
# include <string.h>
# include <ctype.h>
int main(void) {
    int age = 5;

    if (age>10) {
        printf("The age is greater than ten\n");
    }
    else {
        printf("The age is less than 10\n");

    }
    // int a1;
    // printf("Enter the Value of a1:\n");
    // scanf("%d",&a1);
    //
    // if (a1%2== 0) {
    //     printf("The Number is even");
    // }
    // else {
    //     printf("The Number is odd");
    // }

    char str[] = "Sanket My Son";
    char to_find[] = "Sanket";
    if (strstr(str,to_find)!=NULL)
        printf("The word %s is present in string\n",to_find);
    else {
        printf("The word %s is not present\n",to_find);
    }

    // int number;
    // printf("Enter Number to check:");
    // scanf("%d",&number);
    // if (number>0) {
    //         printf("Number is Positive\n");
    // }
    // else {
    //     printf("Number is Negative\n");
    // }
    // char text[100];
    // printf("Enter The text To check:\n");
    // scanf("%s",text);
    // if (text[0] = "\0") {
    //     printf("Text is Empty");
    // }
    // else {
    //     printf("Text is not empty");
    // }

    // int score;
    //     printf("Enter The Score to check grade:\n");
    // scanf("%d",&score);
    // if (score>100) {
    //     printf("Score Cannot be greater than 100\n");
    //     }
    // else if (score>=90) {
    //     printf("Grade A:\n");
    //     }
    // else if (score >= 80) {
    //     printf("Grade B:\n");
    // }
    // else if (score >= 70) {
    //     printf("Grade C:\n");
    // }
    // else if (score >= 60) {
    //     printf("Grade D:\n");
    // }
    // else if (score >= 50) {
    //     printf("Grade E:\n");
    // }
    // else if (score < 50) {
    //     printf("Grade F:\n");
    // }
    int a = 10;
    if (a = 11)
        printf("I am 11\n");
    else
        printf("I am not 11");

    // float marks1;
    // printf("Enter the Marks 1:\n");
    // scanf("%f",&marks1);
    // float marks2;
    // printf("Enter the Marks 2:\n");
    // scanf("%f",&marks2);
    // float marks3;
    // printf("Enter the Marks 3:\n");
    // scanf("%f",&marks3);
    //
    // float calculation;
    // calculation = (marks1+marks2+marks3)/300*(100);
    //
    // if (calculation>40 and marks1>= 33 and marks2 >= 33 and marks3 >= 33 ) {
    //     printf("You are Pass %f\n",calculation);
    //     }
    // else {
    //     printf("Your are Fail %f\n",calculation);
    // }
    char Harry[100];
    printf("Enter The text:\n");
    // scanf("%[^\n]",&Harry);

    char about[] = "Harry";
    char lower_about[] = "harry";

    if (strstr(about,Harry)!=NULL) {
        printf("This Post Talking about harry, Text :-%s\n",Harry);

    }
    else if (strstr(lower_about,Harry)!=NULL) {
        printf("The Post Talking about harry, Text :- %s\n",Harry);
    }
    else {
        printf("This Post Is Not Talking about Harry, Text :- %s\n",Harry);

    }
    // The condition is valid in c non-zero considered as true

    // Ternery Operator
    int x = 345;
    int y = 748;
    x>y?printf("a is greater\n"):printf("b is greater\n");


    char Password[100];
    printf("Enter The Password:\n");
    scanf("%99s",Password);
    // Flags validation
    int has_upper = 0; int has_lower = 0; int has_digit = 0; int pass_length = 8; int has_special = 0;
    int len = strlen(Password);
    if (len<8) {
        printf("The Password should contain 8 character at least");
    }
    if (len>100) {
        printf("The Password should contain least character it is too long");
    }
    for (int i = 0; Password[i] != '\0'; i++) {
        if (isupper(Password[i])) {
            has_upper = 1;
        }
        else if (islower(Password[i])) {
            has_lower = 1;
        }
        else if (isdigit(Password[i])) {
            has_digit = 1;
        }
        else if
        (strchr(("!@#$%^&*()_+=/?|\\<>~"),(Password[i]))) {
            has_special = 1;
        }
    }
    if (!has_upper){
        printf("Password is invalid it It does Not have Upper Case.\n");

    }

    else if (!has_lower) {
        printf("The Password is Missing One Lowercase Character.\n");
    }
    else if (!has_special) {
        printf("The Password is Missing One Special Character Like :-!@#$%%^&*()_+=/?|\\<>~ .\n");
    }
    else if (!has_digit) {
        printf("The Password is Missing Number.\n");
    }
    else {
        printf("The Password is Invalid.\n");
    }




































































































































































































































    return 0;

}




