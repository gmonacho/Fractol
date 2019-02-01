/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   mouse_drag.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 22:01:53 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/01 22:09:30 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

t_point		mouse_drag(int new_x, int new_y)
{
	static int		x = 0;
	static int		y = 0;
	t_point			drag;

	if (!x && !y)
	{
		x = new_x;
		y = new_y;
		drag.x = 0;
		drag.y = 0;
	}
	else
	{
		drag.x = new_x - x;
		drag.y = new_y - y;
		x = new_x;
		y = new_y;
	}
	return (drag);
}
