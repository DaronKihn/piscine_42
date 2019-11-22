/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:30:12 by rschuppe          #+#    #+#             */
/*   Updated: 2018/10/05 21:30:14 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *el;

	el = (t_btree*)malloc(sizeof(t_btree));
	if (el)
	{
		el->item = item;
		el->left = NULL;
		el->right = NULL;
	}
	return (el);
}
