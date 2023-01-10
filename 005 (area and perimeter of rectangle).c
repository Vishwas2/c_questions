/*WAP in C to calculate the area and the perimeter of a rectangle . Take length and breadth as input from the user. If the user
enters a display the area, if the user enters p display the perimeter and if the user enters b display both of them.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int length, breadth, area, perimeter;
    char choice;
    printf("Enter the length of the rectangle : ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle : ");
    scanf("%d", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("what do you want to calculate ?\n");
    printf("To calculate area press a.\nTo calculate perimeter press p.\n");
    printf("If you want to calculate both area and perimeter press b.\n");
    scanf(" %c", &choice);
    if (choice == 'a')
    {
        printf("the area of the rectangle is %d", area);
    }
    else if (choice == 'p')
    {
        printf("the perimeter of the rectangle is %d", perimeter);
    }
    else if (choice == 'b')
    {
        printf("the area of the rectangle is %d\n", area);
        printf("the perimeter of the rectangle is %d\n", perimeter);
    }
    else
    {
        printf("please enter a valid expression.");
    }
    
    return 0;
}
