#include <stdio.h>

void main()
{
    char name[] = "";
    int age;
    char address[] = "";
    printf("Enter your name, age and address\n");
    scanf("%s %d %s", name, &age, address);
    printf("Your name is: %s \nYour age is: %d \nYour address is: %s", name, age, address);

}