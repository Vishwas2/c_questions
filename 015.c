/*WAP IN C TO FIND OUT THE MAXIMUM AND MINIMUM ELEMENT IN AN ARRAY.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num[10];
    int max = -99999999, min = 99999999;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d : \n", i + 1);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    printf("The maximum number in the array is : %d\n", max);
    printf("The minimum number in the array is : %d", min);
    return 0;
}
