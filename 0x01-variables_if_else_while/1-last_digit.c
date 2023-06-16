#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - prints the last digit of the random
 *  number stored in the variable n
 *  Return: Always 0 (Success)
*/
int main(void)
{
   int n;
   int number;

   srand(time(0));
   n = rand() - RAND_MAX / 2;
   number = n;
   if (n < 0)
	   n *= -1;
   while (n> 10)
	   n %= 10;
   if (number < 0)
	   n*= -1;
   if (n == 0)
	   printf("last digit of %d is 0\n", number, n);
   else if (n > 5)
	   printf("last digit of %d is greater than 5\n", number, n);
   else if (n < 6)
	   printf("last digit of %d is %dand is less than 6 and not 0\n", number, n);

}     
