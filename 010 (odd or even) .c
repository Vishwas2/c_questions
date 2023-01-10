/*WAP IN C TO CHECK WHETHER THE NUMBER ENTERED BY THE USER IS ODD OR EVEN*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number you want to check : ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The number is even.");
    }
    else if (num % 2 == 1)
    {
        printf("The number is odd.");
    }
    else
    {
        printf("please enter a valid number.");
    }

    return 0;
}
