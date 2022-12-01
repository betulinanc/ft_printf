/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binanc <binanc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:20:34 by binanc            #+#    #+#             */
/*   Updated: 2022/12/01 21:04:40 by binanc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_putchar(int c);
int		ft_print_uint(unsigned int a);
void	ft_print_u(unsigned int nb);
int		ft_print_str(char *s);
void	ft_print_p(unsigned long long nb);
int		ft_print_ptr(unsigned long long a);
int		ft_print_int(int c);
void	ft_print_h(unsigned int nb, const char format);
int		ft_print_hex(unsigned int a, const char format);
char	*ft_itoa(int n);
#endif
