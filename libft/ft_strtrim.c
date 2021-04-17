/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 09:28:47 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/17 15:37:04 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	size_t		ft_strlen(char *str)
{
	size_t		len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

static	char    *ft_strdup(char *src)
{
	char    *result;
	char    *result_copy;

	result = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (result == NULL)
		return (NULL);
	result_copy = result;
	while(*src)
	{
		*result = *src;
		result++;
		src++;
	}
	*result = 0;
	return (result_copy);
}

char	*cut_left(char const *s1, char const *set)
{
	char *result;

	result = NULL;
	while (*s1 && *set)
	{
		if (*s1 != *set)
			return (NULL);
		s1++;
		set++;
	}
	if (*s1 != 0)
	{
		if ((result = ft_strdup((char *)s1)) == NULL)
			return (NULL);    
	}	
	return (result);
}



// char	*cut_right(char *s2, char const *set)
// {
// 	char		*result;
// 	size_t		set_len;
// 	size_t		s2_len;

// 	result = NULL;
// 	set_len = ft_strlen((char *)set);
// 	s2_len = ft_strlen(s2);
// 	s2 += s2_len;
// 	while (set_len > 0)
// 	{
// 		if (*s2 == *set)
// 			if (ft_strcmp(s2, set) == 0)
// 			{
				
// 			}
// 		s2--;
// 		set_len--;
// 	}

// }

char    *ft_strtrim(char const *s1, char const *set)
{
	char	*s2;

	if ((s2 = cut_left(s1, set)) == NULL)
		return (NULL);
	//if ((s3 = cut_right(s2, set)) == NULL)
		return (NULL);
	
}
