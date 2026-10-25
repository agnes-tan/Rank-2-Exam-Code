// One thing to remember: this approach is valid, but for very large inputs it can be slow, 
// and unsigned int can overflow. For the basic exercise, your logic is good.

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	multiple;

	if (a == 0 || b == 0)
		return (0);
	multiple = a;
	while (multiple % b != 0)
		multiple += a;
	return (multiple);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%u\n", lcm(42, 15));
	return (0);
} */




unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (n % a != 0 || n % b != 0)
		n++;
	return (n);
}
