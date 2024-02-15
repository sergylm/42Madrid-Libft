#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdint.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *str);

void	*ft_memset(void *str, int c, size_t n);

void	ft_bzero(void *str, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t n);

size_t	ft_strlcat(char *dst, const char *src, size_t n);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	*ft_memchr(const void *str, int c, size_t n);

int		ft_memcmp(const void *str1, const void *str2, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t n);

int		ft_atoi(const char *str);

void	*ft_calloc(size_t count, size_t n);

char	*ft_strdup(const char *string);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

char	**ft_split(char const *s, char c);

char    *ft_itoa(int n);

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
#endif