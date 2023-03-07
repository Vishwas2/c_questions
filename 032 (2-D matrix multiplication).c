// Program to take two 2-D arrays as input from the user and do matrix multiplication.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr1[2][2], arr2[2][2], arr3[2][2];
    printf("Please enter the elements of the first array :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the %d,%d element of arr1 :\n", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Now please enter the elements of the second array :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the %d,%d element of arr2 :\n", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    arr3[0][0] = (arr1[0][0] * arr2[0][0]) + (arr1[0][1] * arr2[1][0]);
    arr3[0][1] = (arr1[0][0] * arr2[0][1]) + (arr1[0][1] * arr2[1][1]);
    arr3[1][0] = (arr1[1][0] * arr2[0][0]) + (arr1[1][1] * arr2[1][0]);
    arr3[1][1] = (arr1[1][0] * arr2[0][1]) + (arr1[1][1] * arr2[1][1]);
    printf("The result of matrix multiplication of the two arrays that you have entered is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
