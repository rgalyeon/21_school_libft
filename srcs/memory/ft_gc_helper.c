/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gc_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalyeon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 14:28:15 by rgalyeon          #+#    #+#             */
/*   Updated: 2019/02/23 14:30:39 by rgalyeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_vec	*ft_gc_helper(void)
{
	static t_vec *vec = NULL;

	if (!vec)
		vec = vec_pro_init(2);
	return (vec);
}