/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_source.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <binanc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:20:44 by binanc            #+#    #+#             */
/*   Updated: 2022/12/01 20:20:47 by binanc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_uint(unsigned int a)
{
	int	i;

	i = 0;
	ft_print_u(a);
	if (a == 0)
		i = 1;
	while (a > 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

void	ft_print_u(unsigned int nb)
{
	if (nb > 9)
	{
		ft_print_u (nb / 10);
		ft_print_u (nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	ft_print_str(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}
