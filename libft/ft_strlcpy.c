/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:22:37 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/17 20:37:31 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)		
{
	char		*d = dst;
	const char	*s = src;
	size_t		n = size;
	
	if (src == NULL)
		return (0);
	/* Copy as many bytes as will fit */
	if (n != 0) 
	{
		while (--n != 0)
		{
			if ((*d++ = *s++) == '\0')
				break;
		}
	}
	/* Not enough room in dst, add NUL and traverse rest of src */
	if (n == 0)
	{
		if (size != 0)
			*d = '\0';
		while (*s++);
	}
	return(s - src - 1);
}
