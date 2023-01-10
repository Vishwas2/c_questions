/*WAP IN C THAT PROMPTS THE USER TO ENTER AN INTEGER AND THEN PRINTS
OUT THE NUMBER WITH THE DIGITS REVERSED. FOR EXAMPLE, IF THE USER ENTERS
12345, THE PROGRAM SHOULD PRINT OUT 54321.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, num_reverse=0;
    printf("Enter a number : \n");
    scanf("%d", &num);
    while (num > 0)
    {
        num_reverse = num_reverse * 10 + num % 10;
        num = num / 10;
    }
    printf("The number in reversed order is : %d",num_reverse);
    return 0;
}
