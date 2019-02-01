/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   set_julia.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 21:15:48 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/01 22:29:17 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

void	set_julia( double x, double y, t_window *window)
{
	window->fractal.c_r = 0.285 + window->mod_fract.c_r;
	window->fractal.c_i = 0.01 + window->mod_fract.c_i;
	window->fractal.z_r = x / window->settings.zoom_x + (-1);
	window->fractal.z_i = y / window->settings.zoom_y + (-1.2);
}
