// program to print out the prime factors of the number entered by the user

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, flag;
    printf("Enter a number :\n");
    scanf("%d", &num);
    printf("The prime factors of the number are :\n");
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
