#include <stdio.h>
#include <cs50.h>
// This is my first code in cs50
int main(void)
{
    printf("Hello, World\n");
    string first = get_string("What is your first name? ");
    string last = get_string("What is your last name? ");
    printf("Hello, %s %s \n", first, last);
}