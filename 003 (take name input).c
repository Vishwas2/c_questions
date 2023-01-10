/* WAP IN C TO TAKE NAME, MOBILE NUMBER AND THE AGE OF THE USER AS INPUT AND DISPLAY IT. ASK THE USER IF IT CORRECT.
IF IT IS CORRECT PRINT THANK YOU AND IF THE INFO IS NOT CORRECT TAKE THE INPUT AGAIN.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char name[10];
    int age, mobile;
    printf("Enter your first name : \n");
    scanf("%s", &name);
    printf("Enter your mobile number : \n");
    scanf("%d", &mobile);
    printf("Enter your age : \n");
    scanf("%d", &age);
    printf("Your name is : %s\n", name);
    printf("Your mobile number is : %d\n", mobile);
    printf("Your age is : %d\n", age);
    return 0;
}
