#include <cs50.h>
#include <stdio.h>
#include <math.h>

int difference;
int growth;
int years;
int deaths;
int newborn;
int minpop;
int maxpop;
int main(void)
{
    // TODO: Prompt for start size
    do
    {
        minpop = get_int("Start size: ");
    } while (minpop < 9);
    // TODO: Prompt for end size
    do
    {
        maxpop = get_int("End size: ");
    } while (maxpop < minpop);
    // TODO: Calculate number of years until we reach threshold
    // Initalize for loop with start of 'Start Size' run loop till 'End Size' reached, update with growth.
    for (int i = minpop; i < maxpop; i += growth)
    {
        // Divide start size by 3 to get new borns
        newborn = (minpop / 3);
        printf("%d\n", newborn);
        // Divide start size by 4 to get deaths
        deaths = (minpop / 4);
        printf("%d\n", deaths);
        // The every years growth is new borns minus deaths
        growth = newborn - deaths;
        printf("%d\n", growth);
        // Update the start size with the growth
        minpop += growth;
        printf("%d\n", minpop);
        years++;
    }

    // TODO: Print number of years
    printf("Years: %d\n", years);
}
