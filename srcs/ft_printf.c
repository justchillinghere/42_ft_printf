/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luchitel <luchitel@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:54:58 by luchitel          #+#    #+#             */
/*   Updated: 2023/05/20 15:51:35 by luchitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	char	*format;
	int		result;
	va_list_wrapper	wrap;

	result = 0;
	format = (char *) str;
	va_start(wrap.v, str);
	result = print_init(format, wrap, result);
	va_end(wrap.v);
	return (result);
}
