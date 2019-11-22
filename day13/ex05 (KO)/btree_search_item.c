/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 23:19:20 by rschuppe          #+#    #+#             */
/*   Updated: 2018/10/05 23:19:21 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root,
	void *data_ref, int (*cmpf)(void *, void *))
{
	t_btree *el;

	if (root)
	{
		if ((el = btree_search_item(root->left, data_ref, cmpf)))
			return (el);
		if (cmpf(data_ref, root->item) == 0)
			return (root);
		if ((el = btree_search_item(root->right, data_ref, cmpf)))
			return (el);
	}
	return (NULL);
}
