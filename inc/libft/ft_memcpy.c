/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emirzaza <emirzaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:10:21 by kilchenk          #+#    #+#             */
/*   Updated: 2024/02/02 19:12:53 by emirzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)

{
	size_t	i;
	char	*char_dst;
	char	*char_src;

	if (dst == src)
		return (dst);
	char_dst = (char *) dst;
	char_src = (char *) src;
	i = 0;
	while (i < n)
	{
		char_dst[i] = char_src[i];
		i++;
	}
	dst = (void *)char_dst;
	src = (void *)char_src;
	return (dst);
}
