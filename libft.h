/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:17:17 by ndecotti          #+#    #+#             */
/*   Updated: 2023/10/08 18:18:25 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;