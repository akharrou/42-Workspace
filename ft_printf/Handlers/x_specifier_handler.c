/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_specifier_handler.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:56:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/17 00:22:28 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_char	*x_specifier_handler(t_format format, va_list *args)
{
	if (format.length == H)
		return ((t_char *)
			ft_itoa_base((unsigned short int)va_arg(*args, unsigned int),
			(format.specifier == 'x') ? ALPHABET_LOWER : ALPHABET_UPPER)
		);
	if (format.length == HH)
		return ((t_char *)
			ft_itoa_base((unsigned char)va_arg(*args, unsigned int),
			(format.specifier == 'x') ? ALPHABET_LOWER : ALPHABET_UPPER)
		);
	if (format.length == L)
		return ((t_char *)
			ft_itoa_base((unsigned long int)va_arg(*args, unsigned long),
			(format.specifier == 'x') ? ALPHABET_LOWER : ALPHABET_UPPER)
		);
	if (format.length == LL)
		return ((t_char *)
			ft_itoa_base((unsigned long long)va_arg(*args, unsigned long long),
			(format.specifier == 'x') ? ALPHABET_LOWER : ALPHABET_UPPER)
		);
	else
		return ((t_char *)
			ft_itoa_base((unsigned int)va_arg(*args, unsigned int),
			(format.specifier == 'x') ? ALPHABET_LOWER : ALPHABET_UPPER)
		);
}
