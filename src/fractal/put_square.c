/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   put_square.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/11 13:13:40 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/12 14:28:51 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

void	put_square(t_window *window, int n, t_point point, int size)
{
	if (n > 0)
	{
		draw_square(window, point, size);
		put_square(window, n - 1, create_point(point.x + size / 4 - size / 2,
					point.y + size / 4 - size / 2), size / 2);
		put_square(window, n - 1, create_point(point.x + size / 4 + size / 2,
					point.y + size / 4 - size / 2), size / 2);
		put_square(window, n - 1, create_point(point.x + size / 4 + size / 2,
					point.y + size / 4 + size / 2), size / 2);
		put_square(window, n - 1, create_point(point.x + size / 4 - size / 2,
					point.y + size / 4 + size / 2), size / 2);
	}
}
