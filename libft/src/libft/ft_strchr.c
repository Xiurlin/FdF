/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 21:17:18 by drestrep          #+#    #+#             */
/*   Updated: 2024/02/22 16:11:42 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft/libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == *s)
		return ((char *)s);
	return (NULL);
}

/* int main(void)
{
	printf("%s\n", ft_strchr("Hello there", 't'));
} */
