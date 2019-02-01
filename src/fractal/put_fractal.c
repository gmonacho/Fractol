/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   julia.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 20:54:42 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/01 21:53:24 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#include "../../include/fractol.h"

static void		set_zoom(t_window *window)
{
	if (window->fractal.nb == 1)
	{
		window->settings.zoom_x = WX / (1 - (-1));
		window->settings.zoom_y = WY / (1.2 - (-1.2));
	}
	else if (window->fractal.nb == 2)
	{
		window->settings.zoom_x = WX / (0.6 - (-2.1));
		window->settings.zoom_y = WY / (1.2 - (-1.2));
	}
}

static void		put_mandel_pixel(double x, double y, t_window *window)
{
	double		i;
	double		tmp;

	if (window->fractal.nb == 1)
		set_julia(x, y ,window);
	if (window->fractal.nb == 2)
		set_mandelbrot(x, y ,window);
	i = 0;
	while (i < window->settings.max_ite && window->fractal.z_r * window->fractal.z_r + window->fractal.z_i * window->fractal.z_i < 4)
	{
		tmp = window->fractal.z_r;
		window->fractal.z_r = window->fractal.z_r * window->fractal.z_r - window->fractal.z_i * window->fractal.z_i + window->fractal.c_r;
		window->fractal.z_i = 2 * window->fractal.z_i * tmp + window->fractal.c_i;
		i = i + 1;
	}
	if (i == window->settings.max_ite)
		window->img.tab[(int)(y * WY + x)] = 0xFFFFFF;
}

void			put_fractal(t_window *window)
{
	double		x;
	double		y;

	set_zoom(window);
	window->settings.max_ite = 50;
	x = 0;
	while (x < WX)
	{
		y = 0;
		while (y < WY)
		{
			put_mandel_pixel(x, y, window);
			y++;
		}
		x++;
	}
}
