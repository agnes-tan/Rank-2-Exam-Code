
int	is_prime(int num)
{
	int	divisor;

	if (num < 2)
		return (0);
	divisor = 2;
	while (divisor < num)
	{
		if (num % divisor == 0)
			return (0);
		divisor++;
	}
	return (1);
}

void	put_number(int n)
{
	char	digit;

	if (n >= 10)
		put_number(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	n;
	int	sum;

	if (ac != 2 || av[1][0] < '1' || av[1][0] > '9')
	{
		write(1, "0\n", 2);
		return (0);
	}
	i = 0;
	n = 0;
	while (av[1][i])
	{
		if (av[1][i] < '0' || av[1][i] > '9')
		{
			write(1, "0\n", 2);
			return (0);
		}
		n = n * 10 + av[1][i] - '0';
		i++;
	}
	sum = 0;
	i = 2;
	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	put_number(sum);
	write(1, "\n", 1);
	return (0);
}


// ## Subject

// ```BASH
// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>
// ```
