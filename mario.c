// this program is submitted by Michael Plescia
// pyramid version of mario between 1-8 height
/**
 * C program to print mirrored right triangle star pattern series
 */
//this is how you only make the right aligned pyramid

#include <cs50.h>
#include <stdio.h>


int main(void)
{

  int height;
  int spaces;
  int hash;

do
{
    height = get_int("Height: ");
}
while (height < 1 || height > 8);


for (int i = 0; i < height; i++)
{
    // For loop to print out the spaces
    for (spaces = (height - i); spaces >= 2; spaces--)
    {
        printf(" ");

    }
    // For loop to print out hashes
    for (hash = 1; hash <= (i + 1); hash++)
    {
        printf("#");
    }
    printf("\n");
}
}
     

    