

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*result;
	int	i;
	int	len;

	if (start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (NULL);	
	i = 0;
	while (i < len)
	{
		if (start <= end)
			result[i] = start + i;
		else
			result[i] = start - i;
		i++;
	}
	return (result);
}


// int	*ft_range(int start, int end);

// int	main(void)
// {
// 	int	*result;
// 	int	i;
// 	int	len;

// 	result = ft_range(0, -3);
// 	len = 4;
// 	i = 0;
// 	while (i < len)
// 	{
// 		printf("%d ", result[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(result);
// 	return (0);
// }




```BASH
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
```
