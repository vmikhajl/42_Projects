/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_q.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdomozhy <pdomozhy@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 20:59:00 by pdomozhy          #+#    #+#             */
/*   Updated: 2018/01/20 20:59:02 by pdomozhy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "quaternion.h"

t_q					add_q(t_q a, t_q b)
{
	t_q				tmp;

	tmp = (t_q){
		a.x + b.x,
		a.y + b.y,
		a.z + b.z,
		a.w + b.w
	};
	return (tmp);
}
