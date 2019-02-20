/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:37:31 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/19 18:38:34 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	if ((unsigned int)c == ' ' ||
		(unsigned int)c == '\t' ||
		(unsigned int)c == '\n')
	{
		return (1);
	}
	return (0);
}
