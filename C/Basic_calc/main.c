#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char operation;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &operation);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if(operation == '+')
    {
        printf("Answer: %f", num1 + num2);
    }
    else if(operation == '-')
    {
        printf("Answer: %f", num1 - num2);
    }
    else if(operation == '*')
    {
        printf("Answer: %f", num1 * num2);
    }
    else if(operation == '/')
    {
        printf("Answer: %f", num1 / num2);
    }
    else
    {
        printf("Sorry, no operator has been input to the command line. Program is now exiting.");
    }
    return 0;
}
