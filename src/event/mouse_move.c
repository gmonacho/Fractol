/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   mouse_move.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 16:41:45 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/01 22:13:37 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

int			mouse_move(int x, int y, t_window *window)
{
	window->mouse.x = x;
	window->mouse.y = y;
	window->mouse.drag = mouse_drag(x, y);
	refresh_window(window);
	return (0);
}
