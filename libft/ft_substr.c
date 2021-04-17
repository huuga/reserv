/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 08:08:59 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/17 17:38:07 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*Allocates and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	char	*result_copy;

	result = (char *)malloc(len * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);
	result_copy = result;
	if (*(s + start))
	{
		s = s + start;
		while (len > 0)
		{
			*result = *s;
			result++;
			s++;
			len--;
		}
		*result = 0;
	}
	return (result_copy);
}
