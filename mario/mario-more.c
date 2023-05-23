#include <cs50.h>
#include <stdio.h>

int userInput;
int main(void)
{
// Prompt user for input and store it in variable
    do
    {
        userInput = get_int("Height: ");
    }
    while ((userInput < 1) || (userInput > 8));
    // print rows left pyramid
    for (int i = 0; i < userInput; i++)
    {
        for (int j = userInput - 1; j > i; j--)
        {
            printf(" ");
            // print columns left pyramid
        }
        for (int x = 0; x <= i; x++)
        {
            printf("#");
        }
        // print between space
        printf("  ");
        // print right pyramid
        for (int z = 0; z <= i; z++)
        {
            printf("#");
        }
        // break
        printf("\n");
    }
}