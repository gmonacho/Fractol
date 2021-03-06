/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   mouse_event.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 22:15:44 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/11 17:01:11 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

static void		modify_fractal(t_window *window)
{
	if (window->settings.mod_key)
	{
		if (window->fractal.nb == 1)
		{
			window->mod_fract.c_r += (double)(window->mouse.drag.x) / 100000.0;
			window->mod_fract.c_i += (double)(window->mouse.drag.y) / 100000.0;
		}
		else if (window->fractal.nb == 2)
		{
			window->mod_fract.z_r += (double)(window->mouse.drag.x) / 1000.0;
			window->mod_fract.z_i += (double)(window->mouse.drag.y) / 1000.0;
		}
	}
}

void			mouse_event(t_window *window)
{
	modify_fractal(window);
}
