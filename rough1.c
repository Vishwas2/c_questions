// program to print out triangular star pattern and take input from the user of how many line of triangle do they want to print out

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int rows;
    printf("Enter the number of rows you want in the triangle :\n");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int k = 0; k < rows-i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2*i)-1; j++)
        {
           printf("*"); 
        }
        printf("\n");
    }
    return 0;
}
