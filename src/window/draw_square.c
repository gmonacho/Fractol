/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   draw_square.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/03 05:42:55 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/12 14:24:51 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

void	draw_square(t_window *window, t_point point, int size)
{
	line_put(point, create_point(point.x + size, point.y), window);
	line_put(create_point(point.x + size, point.y),
			create_point(point.x + size, point.y + size), window);
	line_put(create_point(point.x + size, point.y + size),
			create_point(point.x, point.y + size), window);
	line_put(create_point(point.x, point.y + size), point, window);
}
