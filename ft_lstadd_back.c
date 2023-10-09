/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:41:54 by ndecotti          #+#    #+#             */
/*   Updated: 2023/10/09 16:27:57 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst == NULL || new == NULL)
		return ;
	// si premier element list est vide, on assigne a cet element valeur new
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	// sinon on initialise temp pour le faire pointer vers 1er element liste
	temp = *lst;
	// on circule jusqu'au dernier element de la liste
	while (temp->next != NULL)
		temp = temp->next;
	// on fait pointer le dernier element de la liste sur new	
	temp->next = new;
}