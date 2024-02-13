/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emirzaza <emirzaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:29:06 by kilchenk          #+#    #+#             */
/*   Updated: 2024/02/02 19:12:53 by emirzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)

{
	size_t	i;
	char	*result;

	i = 0;
	result = (char *) b;
	while (i < len)
	{
		result[i] = c;
		i++;
	}
	return (b);
}
