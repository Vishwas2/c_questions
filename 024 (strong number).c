// program to check if the number entered by the user is strong number or not
// A Strong Number is a number whose sum of factorial digits is equal to the number itself.
// For ex. : 145 = 1! + 4! +5!  ∴ 145 is a strong number

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
    int number, remainder, total = 0, original_number;
    printf("Enter a number :\n");
    scanf("%d", &number);
    original_number = number;
    while (number > 0)
    {
        remainder = number % 10;
        total = total + factorial(remainder);
        number = number / 10;
    }
    if (total == original_number)
    {
        printf("%d is a strong number.", original_number);
    }
    else
    {
        printf("%d is not a strong number.", original_number);
    }
    return 0;
}
