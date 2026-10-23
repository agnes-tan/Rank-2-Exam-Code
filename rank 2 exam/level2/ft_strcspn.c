
#include <stdio.h>
#include <stddef.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j]) 
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;

	}
	return (i);
}


int main(void)
{
	printf("%zu\n", ft_strcspn("hello,world", ","));
	printf("%zu\n", ft_strcspn("abc123", "0123456789"));
	printf("%zu\n", ft_strcspn("hello", "xyz"));
	printf("%zu\n", ft_strcspn("hello", ""));
	return (0);

}






// ## Subject

// ```BASH
// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);
// ```
