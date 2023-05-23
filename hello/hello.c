#include <stdio.h>
#include <cs50.h>

int main(void)

{
    // Save user input in variable
    string name = get_string("What's your name? ");
    // Print out hello and name saved in variable
    printf("Hello, %s\n", name);
}