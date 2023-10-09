/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:50:03 by ndecotti          #+#    #+#             */
/*   Updated: 2023/10/09 16:28:00 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* prends en parametres l'adresse du pointeur vers un element et l'adresse de la fonction
 * permettant de supprimer le contenu d'un element */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	// on circule ds toute la liste pour effacer contenu
	while (*lst != NULL)
	{
		// temp nous permet d'effacer chaque noeud
		temp = *lst;
		*lst = (*lst)->next;
		del(temp->content); // nettoie ce qu'il y a ds element
		free(temp); // on free pour attribuer valeur prochain noeud
	}
	*lst == NULL;
}