/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emirzaza <emirzaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:33:08 by kilchenk          #+#    #+#             */
/*   Updated: 2024/02/02 19:12:53 by emirzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen2(const char *s2)

{
	int	i;

	i = 0;
	while (*s2++)
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)

{
	int		i;
	char	*s1;

	s1 = (char *) s;
	i = ft_strlen2(s);
	while (i >= 0)
	{
		if (s1[i] == ((char) c))
		{
			return (&s1[i]);
		}
		i--;
	}
	return (0);
}
