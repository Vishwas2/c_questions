// program to print fibonacci series upto the number entered by the user

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n1 = 0, n2 = 1, next_number, input;
    printf("Enter how many numbers of the fibonacci series do you want to print :\n");
    scanf("%d", &input);
    if (input <= 0)
    {
        printf("Please enter a valid input.");
    }
    else if (input == 1)
    {
        printf("0");
    }
    else if (input == 2)
    {
        printf("0, 1");
    }
    else if (input > 2)
    {
        printf("0, 1, ");
        for (int i = 2; i < input; i++)
        {
            next_number = n1 + n2;
            printf("%d, ", next_number);
            n1 = n2;
            n2 = next_number;
        }
    }
    return 0;
}
