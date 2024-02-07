/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selopez- <selopez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:07:52 by selopez-          #+#    #+#             */
/*   Updated: 2024/01/13 19:59:50 by selopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include "unistd.h"
# include <stdio.h>

int	ft_isalpha(int c);

int	ft_isdigit(int c);

int	ft_isalnum(int c);

int	ft_isascii(int c);

int	ft_isprint(int c);

size_t ft_strlen(const char *str);

void *ft_memset(void *str, int c, size_t n);

void ft_bzero(void *str, size_t n);

void *ft_memcpy(void *dst, const void *src, size_t n);

#endif