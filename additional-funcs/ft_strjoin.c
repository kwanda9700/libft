/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksilekwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:59:09 by ksilekwa          #+#    #+#             */
/*   Updated: 2019/06/05 12:00:05 by ksilekwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = ft_strnew(s1_len + s2_len);
	if (!new_str)
		return (NULL);
	i = -1;
	j = -1;
	while (++i < s1_len)
		*(new_str + i) = *(s1 + i);
	while (++j < s2_len)
		*(new_str + i++) = *(s2 + j);
	return (new_str);
}
