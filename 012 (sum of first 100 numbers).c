/* WAP IN C TO CALCULATE AND PRINT OUT THE SUM OF FIRST 100 POSITIVE INTEGERS.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
    printf("the sum of the first 100 positive integers is : %d", sum);
    return 0;
}
