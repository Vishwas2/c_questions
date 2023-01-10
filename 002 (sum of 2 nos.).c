// WAP IN C TO PRINT THE SUM, PRODUCT, DIFFERENCE AND THE REMAINDER OF THE TWO NUMBERS ENTERED BY THE USER.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("The sum of the two numbers is : %d\n", a + b);
    printf("The difference between the two numbers is : %d\n", a - b);
    printf("The product of the two numbers is : %d\n", a * b);
    printf("The remainder after the devision of the two numbers is : %d\n", a % b);
    return 0;
}
