// program to check if the number entered by the user is a perfect square or not

#include <stdio.h>
#include <math.h>
int main()
{
    int input, square_root;
    printf("Enter the number you want to check :\n");
    scanf("%d", &input);
    square_root = sqrt(input);
    if (square_root * square_root == input)
    {
        printf("%d is a perfect square.", input);
    }
    else
    {
        printf("%d is not a perfect square.", input);
    }

    return 0;
}
