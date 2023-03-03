// program to print out all of the factors of the number entered by the user.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number :\n");
    scanf("%d",&num);
    printf("The factors of %d are :\n",num);
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
