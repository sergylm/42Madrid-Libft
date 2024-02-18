#include "libft.h"

int	count_parts(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i])
				i++;
			count++;
		}
	}
	return (count);
}

int	append_parts(char **matrix, const char *s, char c)
{
	int	start;
	int	end;
	int	count;

	count = 0;
	end = 0;
	while (s[end])
	{
		while (s[end] == c)
			end++;
		if (s[end] != c && s[end])
		{
			start = end;
			while (s[end] != c && s[end])
				end++;
			matrix[count++] = ft_substr(s, start, (end - start));
			if (!matrix[count - 1])
				return (0);
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	parts;

	parts = count_parts(s, c);
	result = ft_calloc(parts + 1, sizeof(char *));
	if (!result)
		return (NULL);
	append_parts(result, s, c);
	if (!result)
		return (NULL);
	return (result);
}
