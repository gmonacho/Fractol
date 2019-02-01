/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 16:23:08 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/01 22:22:12 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/fractol.h"

int		main(void)
{
	t_window	window;

	open_window(&window);
	window.fractal.nb = 1;
	window_loop(&window);
	return (0);
}
