/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksilekwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 11:17:02 by ksilekwa          #+#    #+#             */
/*   Updated: 2019/06/18 11:17:06 by ksilekwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
