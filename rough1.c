// write a c program to raise a number entered by the user to the power entered by the user(without using the pow() function

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,power,result=1;
    printf("Enter a number :\n");
    scanf("%d",&num);
    printf("Enter to power to which you would raise the number :\n");
    scanf("%d",&power);
    for (int i = 1; i <= power; i++)
    {
        result=result*num;
    }
    printf("The result is %d",result);
    return 0;
}
