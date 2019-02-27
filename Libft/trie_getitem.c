/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_getitem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 20:40:07 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/26 20:40:08 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*trie_getitem(t_trie *root, char *hash,
				unsigned int (*char_to_index)(char c))
{
	unsigned int index;

	if (root && hash && char_to_index)
	{
		if (*hash == '\0')
			return (root->item);
		index = char_to_index(*hash);
		return (trie_getitem(
			(root->children)[index], hash + 1, char_to_index));
	}
	return (NULL);
}
