#include <stdio.h>
#include <cs50.h>
// Question to the users the give it output
// suppose for this file if user write Y,y. The output will be Agreed
int main(void)
{
    char c = get_char ("Do you agree? \n");
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed. \n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not Agreed. \n");
    }
}