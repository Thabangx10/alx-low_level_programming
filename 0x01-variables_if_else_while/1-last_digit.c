#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
{
	printf("Last digit of %i