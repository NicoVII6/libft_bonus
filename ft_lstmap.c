/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:09:04 by ndecotti          #+#    #+#             */
/*   Updated: 2023/10/09 16:31:04 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* circule dans la liste et applique la fonction f au contenu de chaque element
 * cree une nouvelle liste resultant des applications succesives de f
 * la fonction del est la pour detruire le contenu d'un element */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void *(*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL; // on initialise NULL la nouvelle liste new
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		// si qqchose se passe mal ds ajout du nouvel element apres tranformation avec f
		// on clean toute la liste et on retourne NULL
		if (temp == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}