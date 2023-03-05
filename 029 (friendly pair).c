// program to check if the two numbers given by the user are friendly pair or not
// Friendly pair are two different numbers related in a way such that the Ratio’s sum of the proper divisors divided by number itself for each is same
// For example : 6 and 28 [(1+2+3)/6 = (1+2+4+7+14)/28]

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2, total1 = 0, total2 = 0;
    printf("Enter the first number :\n");
    scanf("%d", &num1);
    printf("Enter the second number :\n");
    scanf("%d", &num2);
    for (int i = 1; i <= num1 / 2; i++)
    {
        if (num1 % i == 0)
        {
            total1 = total1 + i;
        }
    }
    for (int j = 1; j <= num2 / 2; j++)
    {
        if (num2 % j == 0)
        {
            total2 = total2 + j;
        }
    }
    if (total1 / num1 == total2 / num2)
    {
        printf("%d and %d are friendly pair.", num1, num2);
    }
    else
    {
        printf("%d and %d are not friendly pair.", num1, num2);
    }
    return 0;
}
