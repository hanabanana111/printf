/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobori <hakobori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:57:52 by hakobori          #+#    #+#             */
/*   Updated: 2024/05/04 14:45:30 by hakobori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

static long	str_to_int64_within_range(const char *str, int flag)
{
	unsigned long	result;

	result = 0;
	while (*str && ft_isdigit(*str))
	{
		if (!flag && result > (unsigned long)LONG_MAX - (*str - '0') / 10)
			return (LONG_MAX);
		else if (flag && result > (unsigned long)LONG_MIN - (*str - '0') / 10)
			return (LONG_MIN);
		result = result * 10 + *str++ - '0';
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 0;
	result = 0;
	while (*str && ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		sign = (*str++ == '-');
	result = str_to_int64_within_range(str, sign);
	if (sign)
		result = -result;
	return ((int)result);
}
