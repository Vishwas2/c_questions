// WAP IN C TO TAKE SOME NUMBERS AS INPUT FROM THE USER AND PRINT OUT THE MAXIMUM AND SMALLEST NUMBERS ENTERED.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int count[5];
    int max = -99999999, min = 9999999;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d :\n", i + 1);
        scanf("%d", &count[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (count[i] < min)
        {
            min = count[i];
        }
    }
    printf("The maximum number is : %d\n", max);
    printf("The minimum number is : %d\n", min);
    return 0;
}
