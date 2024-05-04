/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobori <hakobori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:55:51 by hakobori          #+#    #+#             */
/*   Updated: 2024/05/04 15:27:39 by hakobori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_u(unsigned int num)
{
	int				ret;
	unsigned long	num2;

	num2 = (unsigned long)num;
	ret = 0;
	ft_putnbr_base_fd(num2, 1, &ret, DEC_LOWER_BASE);
	return (ret);
}
