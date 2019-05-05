/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint_mul.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 19:57:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/04 19:48:15 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"
#include "../Includes/macros_42.h"

#include "../Includes/bigint.h"

t_bigint	bigint_mul(t_bigint num, char *base, int multiplier)
{
	int		intbase;
	int		carry;
	char	tmp;
	int		i;

	num = ft_strdup(num);
	intbase = ft_strlen(base);
	carry = 0;
	i = ft_strlen(num);
	while (--i >= 0)
	{
		if (num[i] == '.')
			--i;
		tmp = INT(num[i], base);
		num[i++] = base[(tmp * multiplier + carry) % intbase];
		carry = ((tmp * multiplier) + carry) / intbase;
	}
	if (carry)
		num = ft_strprepend(num, ft_itoa(carry), 1, 1);
	return (num);
}

/*
**    DESCRIPTION
**         Wrapper function that allows to clean up & free certain variables
**         after function execution.
**
**    PARAMETERS
**
**         int free_num         Integer (boolean) to signal whether
**                              or not to free the variable(s).
**
**    FREE'D PARAMETERS
**
**         - t_bigint num
*/

t_bigint	bigint_mulfre(t_bigint num, char *base, int multiplier,
				int free_num)
{
	t_bigint	res;

	res = bigint_mul(num, base, multiplier);
	if (free_num && num)
		free((void *)num);
	return (res);
}