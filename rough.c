// program to check if the number entered by the user is palindrome or not
// example of a palindrome number : 12321,909,55,etc.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,remainder,reversed=0,original_number;
    printf("Enter a number :\n");
    scanf("%d",&num);
    original_number=num;
    while (num>0)
    {
        remainder=num%10;
        reversed=(reversed+remainder)*10;
        num=num/10;
    }
    reversed=reversed/10;
    printf("The original number is %d\n",original_number);
    printf("The reversed number is %d\n",reversed);
    if (reversed==original_number)
    {
        printf("%d is a palindrome number.",original_number);
    }
    else
    {
        printf("%d is not a palindrome number.",original_number);
    }
    return 0;
}
