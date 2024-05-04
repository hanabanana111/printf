/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobori <hakobori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:56:46 by hakobori          #+#    #+#             */
/*   Updated: 2024/04/25 16:57:17 by hakobori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_digits(int num)
{
	int	count;

	count = 0;
	if (num < 0)
		count++;
	while (num / 10)
	{
		count++;
		num /= 10;
	}
	count++;
	return (count);
}

int	ft_trest_di(int num)
{
	ft_putnbr_fd(num, 1);
	return (ft_get_digits(num));
}
