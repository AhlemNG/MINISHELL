/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:18:41 by anouri            #+#    #+#             */
/*   Updated: 2022/11/30 11:56:26 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	my_c;
	char	*str;

	my_c = (char)c;
	str = (char *)s + ft_strlen((char *)s);
	while (str >= s)
	{
		if (*str == my_c)
			return (str);
		str--;
	}
	return (NULL);
}
