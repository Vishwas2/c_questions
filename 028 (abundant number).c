// program to check if the number entered by the user is an abundant number or not
// a number is said to be an abundant number if the sum of its proper divisors is greater than the number itself
// For ex. : 12 which has proper divisors : 1, 2, 3, 4, 6 and their sum is 16 which is greater than 12 itself

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input, total = 0;
    printf("Enter a number :\n");
    scanf("%d", &input);
    for (int i = 1; i <= input / 2; i++)
    {
        if (input % i == 0)
        {
            total = total + i;
        }
    }
    if (total > input)
    {
        printf("%d is an abundant number.", input);
    }
    else
    {
        printf("%d is not an abundant number.", input);
    }
    return 0;
}
