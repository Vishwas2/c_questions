// program to check if the number entered by the user is an automorphic number or not
// automorphic number is a number whose square ends with the same digit as the number itself
// For ex. : 5^2 = 25 , 6^2 = 36, 25^2 = 625, etc.

#include <stdio.h>
#include <math.h>
int main()
{
    int input, result, number_of_digits = 0, original_number, divisor = 1;
    printf("Enter the number you want to check :\n");
    scanf("%d", &input);
    result = round(pow(input, 2.0));
    original_number = input;
    while (input > 0)
    {
        number_of_digits++;
        input = input / 10;
    }
    for (int i = 0; i < number_of_digits; i++)
    {
        divisor = divisor * 10;
    }
    if (original_number == result % divisor)
    {
        printf("%d is an automorphic number", original_number);
    }
    else
    {
        printf("%d is not an automorphic number", original_number);
    }
    return 0;
}
