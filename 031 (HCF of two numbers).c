// program to find the HCF of the two numbers entered by the user

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2, hcf;
    printf("Enter the first number :\n");
    scanf("%d", &num1);
    printf("Enter the second number :\n");
    scanf("%d", &num2);
    for (int i = 1; i <= num1 / 2 || i <= num2 / 2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("The HCF of the two numbers entered is %d", hcf);
    return 0;
}
