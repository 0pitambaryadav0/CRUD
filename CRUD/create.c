#include <stdio.h>
#include "read.c"
void main()
{
     int age;
    char name[] = "";
   
    char address[] = "";
    printf("Enter your age, name and address\n");
    scanf("%d %s %s", name, &age, address);
    printf("Your name is: %d \nYour age is: %s \nYour address is: %s", age, name, address);
    printf("he");
    read();
}