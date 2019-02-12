/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   put_fractal.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/12 14:37:30 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/12 15:32:29 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

static void		set_zoom(t_window *window)
{
	if (window->fractal.nb == 1)
	{
		window->settings.zoom_x = WX / (1.0 - (-1.0));
		window->settings.zoom_y = WY / (1.2 - (-1.2));
	}
	else if (window->fractal.nb == 2)
	{
		window->settings.zoom_x = WX / (0.6 - (-2.1));
		window->settings.zoom_y = WY / (1.2 - (-1.2));
	}
}

static void		put_pixel(double x, double y, t_window *window)
{
	double		i;
	double		tmp;

	i = 0;
	while (i < window->settings.max_ite && window->fractal.z_r * window->
			fractal.z_r + window->fractal.z_i * window->fractal.z_i < 4)
	{
		tmp = window->fractal.z_r;
		window->fractal.z_r = window->fractal.z_r * window->fractal.z_r
			- window->fractal.z_i * window->fractal.z_i + window->fractal.c_r;
		window->fractal.z_i = 2 * window->fractal.z_i * tmp
			+ window->fractal.c_i;
		i = i + 1;
	}
	if (i == window->settings.max_ite && y  > 0
			&& y  < WY)
		window->img.tab[(int)(y * WY
				+ x)] = 0x000000;
	else if (x  > 0 && x < WX)
		window->img.tab[(int)(y * WY + x)] = ((0 << 16) | (0 << 8)
					| (int)(i * 255 / window->settings.max_ite));
}

void			put_fractal(t_window *window)
{
	double		x;
	double		y;

	set_zoom(window);
	x = 0;
	while (x < WX)
	{
		y = 0;
		while (y < WY)
		{
			if (window->fractal.nb == 1)
				set_julia(x, y, window);
			if (window->fractal.nb == 2)
				set_mandelbrot(x, y, window);
			put_pixel(x, y, window);
			y++;
		}
		x++;
	}
}
