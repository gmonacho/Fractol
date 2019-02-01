/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   refresh_window.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 18:13:42 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/01 22:32:26 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

void	refresh_window(t_window *window)
{
	mlx_destroy_image(window->mlx_ptr, window->img.ptr);
	window->img.ptr = mlx_new_image(window->mlx_ptr, WX, WY);
	window->img.tab = (int*)mlx_get_data_addr(window->img.ptr, &(window->img.bpp), &(window->img.s_l), &(window->img.endian));
	key_event(window);
	mouse_event(window);
	put_fractal(window);
	printf("c_r = %f, c_i = %f, nb = %d\n", window->mod_fract.c_r, window->mod_fract.c_i, window->fractal.nb);
	mlx_put_image_to_window(window->img.tab, window->win_ptr, window->img.ptr, 0, 0);
}
