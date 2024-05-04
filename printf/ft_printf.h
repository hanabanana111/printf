/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobori <hakobori@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:39:57 by hakobori          #+#    #+#             */
/*   Updated: 2024/05/04 15:27:35 by hakobori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define HEX_LOWER_BASE "0123456789abcdef"
# define HEX_UPPER_BASE "0123456789ABCDEF"
# define DEC_LOWER_BASE "0123456789"

int		ft_treat_char(int c);
int		ft_treat_string(char *s);
void	ft_putnbr_base_fd(unsigned long n, int fd, int *ret, char *base);
int		ft_treat_hex(unsigned int num, char c);
int		ft_treat_p(void *p);
int		ft_get_digits(int num);
int		ft_treat_u(unsigned int num);
int		ft_trest_di(int num);
int		ft_printf(const char *fmt, ...);
int		ft_treat_smt(char *str, va_list args);

#endif