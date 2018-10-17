/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 22:33:19 by sgalasso          #+#    #+#             */
/*   Updated: 2018/04/07 12:40:54 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_transfert_trim(char *str, char *s, int i, int temp)
{
	if (!(str = ft_strnew(i - (i - temp))))
		return (0);
	i = 0;
	while (i < temp)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		temp;

	i = 0;
	temp = 0;
	str = 0;
	if (!s)
		return (0);
	while (s && (ft_isw(*s)))
		s++;
	while (s[i])
	{
		if (!ft_isw(s[i]))
			temp = i + 1;
		i++;
	}
	str = ft_transfert_trim(str, (char *)s, i, temp);
	return ((char *)str);
}
