// WAP TO TAKE A STRING AS INPUT FROM THE USER AND DISPLAY IT

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[50];
    printf("Enter a string :\n");
    gets(str);
    printf("The string you entered is %s",str);
    return 0;
}
