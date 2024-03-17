#include "libft.h"
#include <stdlib.h>

static void make_set(char const *set, int charSet[256])
{
	size_t	set_i = 0;
	
	while (set[set_i])
	{
		unsigned char ch = set[set_i];
		charSet[ch] = 1;
		set_i++;
	}
}
static int start_trim(char const *s1, size_t j, size_t k, int charSet[256])
{
	while (j <= k)
	{
		if (charSet[(unsigned char)s1[j]] == 1)
			j++;
		else
			break;
	}
	return (j);
}
static int end_trim(char const *s1, size_t j, size_t k, int charSet[256])
{
	while (j <= k)
	{
		if (charSet[(unsigned char)s1[k]] == 1)
			k--;
		else
			break;
	}
	return (k);
}
static char *populate(char *ptr, char const *s1, size_t j, size_t k, size_t l)
{
	ptr = malloc(k - j + 2);
	if (ptr)
	{
		while (j <= k)
		{
			ptr[l] = s1[j];
			l++;
			j++;
		}
		ptr[l] = '\0';
		return (ptr);
	}
	else
		return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	j;
	size_t	k;
	size_t	l;
	char *ptr;
	int charSet[256];

	j = 0;
	k = ft_strlen(s1) - 1;
	l = 0;
	if (!set || !s1)
		return (NULL);
	make_set(set, charSet);
	j = start_trim(s1, j, k, charSet);
	k = end_trim(s1, j, k, charSet);
	ptr = populate(ptr, s1, j, k, l);
	return (ptr);
}
// #include <stdio.h>
// int	main(void)
// {
// 	const char *s1 = "gdoo dogHello Worldgogdgd";
// 	const char *set = "dog";
// 	char *new_s = ft_strtrim(s1, set);

// 	printf("new sentence: %s", new_s);

// 	free(new_s);

// 	return (0);
// }