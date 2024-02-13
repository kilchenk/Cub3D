/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emirzaza <emirzaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:45:59 by kilchenk          #+#    #+#             */
/*   Updated: 2024/02/02 19:12:53 by emirzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	unsigned char	*char_dst;
	unsigned char	*char_src;

	if (dst == src)
		return (dst);
	char_dst = dst;
	char_src = (unsigned char *) src;
	if (dst < src)
	{
		return (ft_memcpy(dst, src, len));
	}
	while (len--)
		char_dst[len] = char_src[len];
	return (dst);
}
