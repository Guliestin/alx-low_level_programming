#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doe for function main goes there*/
/**
 *main - main function
 *
 *Return: always O
*/

int main(void)
{
int n;
int srand;
int rand;
int RAND_MAX; 
srand(time(0));
n = rand() - RAND_MAX / 2;
  /*your code goes there*/
if (n > 0)
printf("%d is positive", n);
else if (n == 0)
printf("%d is zero", n);
else
printf("*d is negative", n);
return (0);
}
