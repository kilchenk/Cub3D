/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emirzaza <emirzaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:25:33 by kilchenk          #+#    #+#             */
/*   Updated: 2024/02/02 19:12:53 by emirzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	size_t			i;
	unsigned char	*s1_s;
	unsigned char	*s2_s;

	i = 0;
	s1_s = (unsigned char *) s1;
	s2_s = (unsigned char *) s2;
	while (i < n)
	{
		if (s1_s[i] != s2_s[i])
			return (s1_s[i] - s2_s[i]);
		i++;
	}
	return (0);
}
