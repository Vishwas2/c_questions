/* WAP IN C TO CALCULATE THE MEAN OF THE NUMBERS ENTERED BY THE USER*/

#include <stdio.h>
int main()
{
    int total = 0;
    float num, mean, i;
    printf("How many numbers do you want to enter ?");
    scanf("%f", &i);
    for (int j = 0; j < i; j++)
    {
        printf("Enter number %d : \n", j + 1);
        scanf("%f", &num);
        total = total + num;
    }
    mean = total / i;
    printf("The mean of the numbers entered is : %.2f", mean);
    return 0;
}
