/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   key_press.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 16:40:14 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/12 14:38:36 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

int		key_press(int keycode, t_window *window)
{
	window->keyboard.tab[keycode] = 1;
	if (keycode == 83 || keycode == 84 || keycode == 85)
	{
		window->settings.max_ite = 2;
		if (keycode == 83 || keycode == 84)
			window->settings.zoom = 1;
		else
			window->settings.zoom = 100;
	}
	else if (keycode == 49)
		window->settings.mod_key = (window->settings.mod_key) ? 0 : 1;
	refresh_window(window);
	return (0);
}
