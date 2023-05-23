#include <cs50.h>
#include <stdio.h>
#include <string.h>

int number;
int sum = 0;
char str[20];
long cardNumber;
int firstDigit = 0;
int secondDigit = 0;
int main(void)
{
    // Get input from user
    cardNumber = get_long("Number: ");
    // Convert cardnumber into string
    sprintf(str, "%ld", cardNumber);
    // Get length of the string
    int len = strlen(str);
    // Init array that contains the digits
    int digits[len];
    // Store digits in array and turn into integers
    for (int i = 0; i < len; i++)
    {
        digits[i] = str[i] - '0';
    }
    // Multiply every other digit starting from the second last digit
    for (int i = len - 2; i >= 0; i -= 2)
    {
        digits[i] *= 2;
    }
    // Loop trough the numbers of the array, if any of them >= than 10, save separated digits in var
    // Sum up all the one digit numbers and save them in var
    for (int i = len - 1; i >= 0; i--)
    {
        if (digits[i] >= 10)
        {
            firstDigit = digits[i] / 10;
            secondDigit = digits[i] % 10;
            sum += firstDigit;
            sum += secondDigit;
        }
        else
        {
            sum += digits[i];
        }
    }

    // Create an array that contains first 2 digits of cardnumbers and make them integers
    int companyId[2];
    for (int i = 0; i < 2; i++)
    {
        companyId[i] = str[i] - '0';
    }

    // Put the first two digits of previous array into a variable
    number = companyId[0] * 10 + companyId[1];

    // Check if card is valid
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
    }
    // Check if first number of card is a 4 and number is 13+, if yes it's visa

    else if (number / 10 == 4 && len >= 13)
    {
        printf("VISA\n");
    }
    else if (number == 51)
    {
        printf("MASTERCARD\n");
    }
    else if (number == 52)
    {
        printf("MASTERCARD\n");
    }
    else if (number == 53)
    {
        printf("MASTERCARD\n");
    }
    else if (number == 54)
    {
        printf("MASTERCARD\n");
    }
    else if (number == 55)
    {
        printf("MASTERCARD\n");
    }
    else if (number == 34)
    {
        printf("AMEX\n");
    }
    else if (number == 37)
    {
        printf("AMEX\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
