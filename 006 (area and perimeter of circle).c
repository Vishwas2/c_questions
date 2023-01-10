/*WAP IN C TO PRINT OUT THE AREA AND PERIMETER OF A CIRCLE. TAKE RADIUS AS INPUT FROM THE USER.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    float radius, area, perimeter;
    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    perimeter = 2 * 3.14 * radius;
    printf("The area of the circle is : %.2f\n", area);
    printf("The perimeter of the circle is : %.2f\n", perimeter);
    return 0;
}
