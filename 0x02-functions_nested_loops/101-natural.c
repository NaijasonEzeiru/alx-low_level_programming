#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 *If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line
*Return: always 0 (success)
*/

int main() 
{

  int sum = 0;

	for (int i = 3; i < 1000; i++) 
	{

		if (i%3==0 or i%5==0)

			sum += i;
	}

	cout << sum;

	return 0;
}
