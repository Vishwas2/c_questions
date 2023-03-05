// program to check if the number entered by the user is a harshad number or not.
// a Harshad number is a number that is divisible by the sum of its digits.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input, original_number, total = 0, remainder;
    printf("Enter a number :\n");
    scanf("%d", &input);
    original_number = input;
    while (input > 0)
    {
        remainder = input % 10;
        total = total + remainder;
        input = input / 10;
    }
    if (original_number % total == 0)
    {
        printf("%d is a Harshad number.", original_number);
    }
    else
    {
        printf("%d is not a Harshad number.", original_number);
    }
    return 0;
}
