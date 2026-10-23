#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
char    *ft_strdup(char *src)
{
	int i;
	int len;
	char *dup;

	len = 0;
	while (src[len])
		len++; 
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}


int main(void)
{
	printf("%s", ft_strdup("hello"));
	return (0); 
}


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
char    *ft_strdup(char *src)
{
	size_t i;
	size_t len;
	char *dup;

	len = 0;
	while(src[len])
		len++;
	dup = malloc(len + 1);
	if (!dup)
		return(NULL);
	i = 0;

}
