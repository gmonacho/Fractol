/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   refresh_window.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 18:13:42 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/12 14:27:08 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

void	refresh_window(t_window *window)
{
	mlx_destroy_image(window->mlx_ptr, window->img.ptr);
	window->img.ptr = mlx_new_image(window->mlx_ptr, WX, WY);
	window->img.tab = (int*)mlx_get_data_addr(window->img.ptr,
			&(window->img.bpp), &(window->img.s_l), &(window->img.endian));
	key_event(window);
	mouse_event(window);
	if (window->fractal.nb == 1 || window->fractal.nb == 2)
		put_fractal(window);
	else
		put_square(window, window->settings.max_ite,
				create_point(WX / 2 - window->settings.zoom / 2,
					WY / 2 - window->settings.zoom / 2), window->settings.zoom);
	mlx_put_image_to_window(window->img.tab, window->win_ptr,
			window->img.ptr, 0, 0);
}
