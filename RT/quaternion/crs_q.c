/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crs_q.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdomozhy <pdomozhy@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 20:59:00 by pdomozhy          #+#    #+#             */
/*   Updated: 2018/01/20 20:59:02 by pdomozhy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "quaternion.h"

t_q					crs_q(t_q a, t_q b)
{
	t_q				tmp;

	tmp = (t_q){
		a.y * b.z - a.z * b.y,
		a.z * b.x - a.x * b.z,
		a.x * b.y - a.y * b.x,
		0.0f
	};
	return (tmp);
}
