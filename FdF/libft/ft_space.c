/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikhajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 20:06:13 by vmikhajl          #+#    #+#             */
/*   Updated: 2017/11/09 20:06:15 by vmikhajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_space(const char *s)
{
	int		i;
	int		ret;

	if (s == NULL)
		return (0);
	ret = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\r'
		|| s[i] == '\v' || s[i] == '\f')
	{
		i++;
		ret++;
	}
	return (ret);
}
