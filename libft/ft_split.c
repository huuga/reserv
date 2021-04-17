/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 10:54:46 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/17 15:28:20 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void *ft_memcpy(void *dest, void *src, size_t n)
{
	char *dest_copy;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_copy = dest;
	while(n--)
		*dest_copy++ = *(char *)src++;
	return (dest);
}

static	size_t		strclen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c)
	{
		s++;
		len++;
	}
	return (len);
}

//counting number of words
static	size_t		num_of_words(char const *s, char c)
{
	size_t	i;
	size_t	num;
	
	i = 0;
	num = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c)
				i++;
			num++;
		}
		i++;
	}
	return (num);
}

/*Allocates and returns an array of strings obtained by
splitting ’s’ using the character ’c’ as a delimiter.*/
char **ft_split(char const *s, char c)
{
	char	**result;
	size_t	n_o_w;
	size_t	i;

	n_o_w = num_of_words(s, c);
	result = (char **)malloc(sizeof(char *) * n_o_w + 1);
	if (result == NULL)
		return (NULL);
	i = 0;

	while (*s)
	{
		if (*s != c)
		{
			*result = (char *)malloc(sizeof(char) * strclen(s, c) + 1);
			if (ft_memcpy((void *)*result, (void *)s, strclen(s, c)) == NULL)
				return (NULL);	
			s += strclen(s, c);
			result++;
		}
		s++;
	}
	*result = NULL;
	return (NULL);
}
