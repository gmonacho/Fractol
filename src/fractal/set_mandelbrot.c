/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   set_mandelbrot.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 21:40:31 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/12 14:28:30 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

void	set_mandelbrot(double x, double y, t_window *window)
{
	window->fractal.c_r = x / window->settings.zoom_x + (-2.1);
	window->fractal.c_i = y / window->settings.zoom_y + (-1.2);
	window->fractal.z_r = 0 + window->mod_fract.z_r;
	window->fractal.z_i = 0 + window->mod_fract.z_i;
}
