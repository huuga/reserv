/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 20:58:58 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/18 22:38:23 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	int_mod(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static	int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

static void	strrev(char *res)
{
	size_t	i;
	char	temp;
	size_t	res_len;

	i = 0;
	res_len = ft_strlen(res);
	while (i < res_len / 2)
	{
		temp = res[i];
		res[i] = res[res_len - i - 1];
		res[res_len - i - 1] = temp;
		i++;
	}
}

static unsigned int	size_of_int(int n, int *flag)
{
	unsigned int	k;

	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	k = 0;
	if (n > 0)
	{
		while (n > 0)
		{
			n = n / 10;
			k++;
		}
		return (k);
	}
	else
	{
		*flag = -(*flag);
		while (n < 0)
		{
			n = n / 10;
			k++;
		}
		return (k + 1);
	}
}

char	*ft_itoa(int n)
{
	char			*result;
	char			*result_copy;
	unsigned int	n_size;
	int				flag;

	flag = 1;
	n_size = size_of_int(n, &flag);
	result = (char *)malloc(n_size * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);
	result_copy = result;
	n = int_mod(n);
	if (n == 0)
	{
		*result++ = '0';
		*result = 0;
		return (result_copy);
	}
	while (n > 0)
	{
		*result++ = (n % 10) + 48;
		n = n / 10;
	}
	if (flag < 0)
		*result++ = '-';
	*result = 0;
	strrev(result_copy);
	return (result_copy);
}
