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

void	**free_str(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
	return (NULL);
}

char	**append_parts(char **matrix, const char *s, char c)
{
	int	start;
	int	end;
	int	count;

	end = 0;
	count = 0;
	while (s[end])
	{
		while (s[end] == c)
			end++;
		if (s[end] != c && s[end])
		{
			start = 0;
			while (s[end + start] != c && (s[end + start]))
				start++;
			matrix[count] = ft_substr(s, end, start);
			if (!matrix[count++])
				return ((char **) free_str(matrix));
			end += start;
		}
	}
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		parts;

	parts = count_parts(s, c);
	result = ft_calloc(parts + 1, sizeof(char *));
	if (!result)
		return (NULL);
	result = append_parts(result, s, c);
	return (result);
}
