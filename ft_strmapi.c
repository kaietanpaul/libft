#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new_s;
	int	i;

	i = 0;
	new_s = "";
	if (s == NULL)
		return (NULL);
	new_s = malloc(ft_strlen(s) + 1);
	if (new_s)
	{
		while (s[i])
		{
			new_s[i] = f(i, s[i]);
			i++;
		}
		new_s[i] = '\0';
	}
	else
		return (NULL);
	return (new_s);
}
/*#include <ctype.h>
#include <stdio.h>
char uppercase_transform(unsigned int i, char c) {
	(void)i;
	return toupper(c);
}
int main(void) {
	char const *s = "hello, world";
	char *result;
	
	result = ft_strmapi(s, uppercase_transform);
	if (result != NULL) {
		printf("s1: %s\n", s);
		printf("new_s: %s\n", result);
		free(result);
	} else {
		printf("Memory allocation failed\n");
	}

	return 0;
}*/