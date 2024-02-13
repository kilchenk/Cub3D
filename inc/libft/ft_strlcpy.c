/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emirzaza <emirzaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:50:41 by kilchenk          #+#    #+#             */
/*   Updated: 2024/02/02 19:12:53 by emirzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *str, size_t dstsize)

{
	size_t	len;

	len = 0;
	if (dstsize == 0 && *str)
	{
		while (*str != '\0')
		{
			str++;
			len++;
		}
		return (len);
	}
	while (*(str + len) && --dstsize)
		*dst++ = *(str + len++);
	*dst = '\0';
	while (*(str + len))
		len++;
	return (len);
}
