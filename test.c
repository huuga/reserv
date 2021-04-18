


#include <stdio.h>

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlacresh <rlacresh@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 20:58:58 by rlacresh          #+#    #+#             */
/*   Updated: 2021/04/18 22:28:01 by rlacresh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	int_neg(int *n, char **result)
{
	while (*n > 0)
	{
		**result = (*n % 10) + 48;
		(*result)++;
		*n = *n / 10;
	}
	**result = '-';
	(*result)++;
	**result = 0;
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

static unsigned int	size_of_int(int n)
{
	unsigned int	k;

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
		//*flag = -(*flag);
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
	//int				flag;

	//flag = 1;
	n_size = size_of_int(n);
	result = (char *)malloc(n_size * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);
	result_copy = result;
	//n = int_mod(n);
	if (n == 0)
	{
		*result++ = '0';
		*result = 0;
		return (result_copy);
	}
	if (n > 0)
		int_neg(&n, &result);

	strrev(result_copy);
	return (result_copy);
}



int main()
{
	printf("%s", ft_itoa(123));
}
