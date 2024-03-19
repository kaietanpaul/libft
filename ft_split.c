#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c) {
	int counter;
	int inside;

	counter = 0;
	inside = 0;
	while (*s)
	{
		if (*s != c && inside == 0)
		{
			inside = 1;
			counter++;
		}
		else if (*s == c)
		{
			inside = 0;
		}
		s++;
	}
	return counter;
}

static int	find_next_substr(const char *s, char c, size_t *start, size_t *end)
{
	while (s[*start] && s[*start] == c)
		(*start)++;
	if (!s[*start])
		return 0;
	*end = *start;
	while (s[*end] && s[*end] != c)
		(*end)++;
	return 1;
}
static int	fill_substrings(char **array, char const *s, char c, int word_count)
{
	size_t	start;
	size_t	end;
	int		i;

	start = 0;
	end = 0;
	i = 0;
	while (i < word_count)
	{
		if (!find_next_substr(s, c, &start, &end))
			break;
		array[i] = ft_substr(s, start, end - start);
		if (!array[i])
		{
			while (i-- > 0)
				free(array[i]);
			return (0);
		}
		start = end;
		i++;
	}
	array[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		word_count;

	if (!s) return (NULL);

	word_count = count_words(s, c);
	array = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!array)
		return (NULL);

	if (!fill_substrings(array, s, c, word_count))
	{
		free(array);
		return (NULL);
	}
	return array;
}
/*#include <stdio.h>
int main(void)
{
	char const *s = "hello world this is a test";
	char c = ' ';
	char **array = ft_split(s, c);

	if (array == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}

	for (int i = 0; array[i] != NULL; i++)
	{
		printf("Substring %d: %s\n", i, array[i]);
		free(array[i]);
	}
	free(array);

	return 0;
}*/