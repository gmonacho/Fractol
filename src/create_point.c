/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   create_point.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/08 20:16:36 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/11 14:12:41 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/fractol.h"

t_point		create_point(double x, double y)
{
	t_point		point;

	point.x = x;
	point.y = y;
	return (point);
}
