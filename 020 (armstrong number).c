// program to check if the number entered by the user is an armstrong number of not
// example of an armstrong number : 153 = 1^3 + 5^3 + 3^3 = 153

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2,original_number,num_of_digits=0,total=0,remainder,result=1;
    printf("Enter a number :\n");
    scanf("%d",&num1);
    num2=num1;
    original_number=num1;
    while (num1>0)
    {
        num1=num1/10;
        num_of_digits++;
    }
    for (int i = 0; i < num_of_digits; i++)
    {
        remainder=num2%10;
        for (int j = 0; j < num_of_digits; j++)
        {
            result=result*remainder;
        }
        total=total+result;
        result=1;
        num2=num2/10;
    }
    if (total==original_number)
    {
        printf("%d is an armstrong number.",total);
    }
    else
    {
        printf("%d is not an armstrong number.",total);
    }
    return 0;
}
