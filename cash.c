#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Use get_float to get input of change owed
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);
   
    // Convert dollars to cents and round
    int cents = round(change * 100);
   
    // Start a counter for number of coins used
    int counter;
    counter = 0;
   
    // Run through cents respectively counting how many coins are used
    while (cents > 0)
    {
        while (cents  >= 25)
        {
            counter++;
            cents = cents - 25;
        }  
      
        while (cents >= 10)
        {
            counter++;
            cents = cents - 10;
        }
      
        while (cents >= 5)
        {
            counter++;
            cents = cents - 5;
        }
      
        while (cents >= 1)
        {
            counter++;
            cents = cents - 1;
        }
        // Print out the number of coins used
        printf("%i\n", counter);
    }
}