#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*#include <ctype.h>
#include <stdio.h>
#include <string.h>
static void uppercase_char(unsigned int index __attribute__((unused)), char *ch) {
	if (ch != NULL) {
		*ch = toupper(*ch);
	}
}
int main(void) {
	char *str = malloc(sizeof(char) * (ft_strlen("Hello, World!") + 1));

	strcpy(str, "Hello, World!");
	ft_striteri(str, uppercase_char);
	printf("Modified string: %s\n", str);
	free(str);

	return 0;
}*/