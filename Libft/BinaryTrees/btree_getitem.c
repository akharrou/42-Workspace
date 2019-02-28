/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_getitem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 20:42:34 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 16:45:11 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*btree_getitem(t_btree *root, void *item_ref,
	int (*cmpf)(void *, void *))
{
	if (root)
	{
		if ((*cmpf)(root->item, item_ref) == 0)
			return (root->item);
		if (root->left)
			return (btree_getitem(root->left, item_ref, cmpf));
		if (root->right)
			return (btree_getitem(root->right, item_ref, cmpf));
	}
	return (0);
}