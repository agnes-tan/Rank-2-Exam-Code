#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	r;
	char	c;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			c = av[1][i];
			if (c >= 'a' && c <= 'z')
				r = c - 'a' + 1;
			else if (c >= 'A' && c <= 'Z')
				r = c - 'A' + 1;
			else
				r = 1;
			while (r > 0)
			{
				write(1, &c, 1);
				r--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}




int	main(int ac, char **av)
{
	int i;
	int r;
	char c;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			c = av[1][i];
			if (c >= 'a' && c <= 'z')
				r = c - 'a' + 1;
			else if (c >= 'A' && c <= 'Z')
				r = c - 'A' + 1;
			else 
				r = 1;
			while (r--)
				write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// while (r--)
// 	write(1, &c, 1);


// ## Subject

// ```BASH
// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>
