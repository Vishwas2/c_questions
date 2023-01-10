/*WAP IN C TO TAKE 5 NUMBERS AS INPUT FROM THE USER AND DISPLAY THEIR SUM.( DO THIS USING ARRAYS)*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char choice;
    int num[5], sum = 0;
    printf("Do you want to calcualte the sum of five numbers ? (y/n)");
    scanf("%c", &choice);
    if (choice == 'n')
    {
        printf("Thank you.");
    }
    else if (choice == 'y')
    {
        for (int i = 0; i < 5; i++)
        {
            printf("Enter number %d : \n", i + 1);
            scanf("%d", &num[i]);
        }
        for (int i = 0; i < 5; i++)
        {
            sum = sum + num[i];
        }
        printf("The sum of the five numbers entered is : %d", sum);
    }

    return 0;
}
