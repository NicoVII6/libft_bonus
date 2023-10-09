/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:28:20 by ndecotti          #+#    #+#             */
/*   Updated: 2023/10/09 12:01:35 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* prends l'adresse du pointeur vers le 1er element de la liste et prends l'adresse
 * du pointeur vers l'element a rajouter dans liste */
void	ft_lstadd_front(t_list **lst, t_list *new)
{	
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst; // on fait pointer le nouvel element sur la liste
	*lst = new; // on ajoute au nouvel element la valeu de new
}