/*WAP IN C TO CALCULATE THE ABSOLUTE VALUE OF THE NUMBER ENTERED BY THE USER.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number : \n");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("The absolute value of the number is : %d", num);
    }
    else if (num < 0)
    {
        num = -num;
        printf("The absolute value of the number is : %d", num);
    }
    else
    {
        printf("Please enter a valid input.");
    }
    return 0;
}
