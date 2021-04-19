/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 08:43:26 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/19 08:43:26 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

static size_t	ft_strlen(char *str)
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

void ft_putstr_fd(char *s, int fd)
{
	size_t	slen;

	if (s == NULL)
		return ;
	slen = ft_strlen(s);
	write(fd, s, slen + 1);

}
