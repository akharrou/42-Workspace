/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_getindex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 09:58:18 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/02 07:58:08 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		dict_getindex(t_hashtable *table, char *key)
{
	if (table && key)
		if (hashtab_fetch_entry(table, key))
			return (HASHCODE(key, table->num_buckets));
	return (-1);
}