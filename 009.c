/*WAP IN C TO CALCULATE THE FACTORIAL OF THE NUMBER ENTERED BY THE USER. THE FACTORIAL OF NUMBER 5 IS 5*4*3*2*1 = 120. AND THE FACTORIAL OF 1 AND 0 IS 1.*/

#include <stdio.h>
int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter the number you want to calculate the factorial of : \n");
    scanf("%d", &number);
    printf("The factorial of the given number is : %d", factorial(number));
    return 0;
}
