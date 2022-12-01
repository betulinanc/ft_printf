/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_source1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <binanc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:20:52 by binanc            #+#    #+#             */
/*   Updated: 2022/12/01 20:45:16 by binanc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_p(unsigned long long nb)
{
	if (nb >= 16)
	{
		ft_print_p((nb / 16));
		ft_print_p((nb % 16));
	}
	else
	{
		if (nb <= 9)
			ft_putchar (nb + 48);
		else
			ft_putchar (nb - 10 + 'a');
	}
}

int	ft_print_ptr(unsigned long long a)
{
	int	i;

	i = 0;
	write(1, "0x", 2);
	ft_print_p(a);
	if (a == 0)
		return (3);
	while (a > 0)
	{
		a = a / 16;
		i++;
	}
	return (i + 2);
}

int	ft_print_int(int c)
{
	int		i;
	char	*s;

	s = ft_itoa(c);
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	free (s);
	return (i);
}

void	ft_print_h(unsigned int nb, const char format)
{
	if (nb >= 16)
	{
		ft_print_h ((nb / 16), format);
		ft_print_h ((nb % 16), format);
	}
	else
	{
		if (nb <= 9)
			ft_putchar(nb + 48);
		else
		{
			if (format == 'x')
				ft_putchar(nb - 10 + 'a');
			if (format == 'X')
				ft_putchar(nb - 10 + 'A');
		}
	}
}

int	ft_print_hex(unsigned int a, const char format)
{
	int	i;

	i = 0;
	ft_print_h(a, format);
	if (a == 0)
		return (1);
	while (a > 0)
	{
		a = a / 16;
		i++;
	}
	return (i);
}
