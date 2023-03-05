// program to check if the number entered by the user is a perfect number or not
// a perfect number is a positive number that is equal to the sum of all it's divisors excluding itself.
// For ex. : 6 = 1 + 2 + 3

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input, total = 0;
    printf("Enter the number you want to check :\n");
    scanf("%d", &input);
    if (input < 0)
    {
        printf("Please enter a positive number.");
    }
    else
    {
        for (int i = 1; i < input; i++)
        {
            if (input % i == 0)
            {
                total = total + i;
            }
        }
        if (total == input)
        {
            printf("%d is a perfect number.", input);
        }
        else
        {
            printf("%d is not a perfect number.", input);
        }
    }
    return 0;
}
