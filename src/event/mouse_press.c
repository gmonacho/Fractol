/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   mouse_press.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 16:42:17 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/12 15:32:26 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

int			mouse_press(int button, int x, int y, t_window *window)
{
	x = 0;
	y = 0;
	window->mouse.button[button] = 1;
	if (button == 4)
		window->settings.zoom += 1;
	else if (button == 5)
		window->settings.zoom -= 1;
	refresh_window(window);
	return (0);
}
