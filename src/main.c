/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 16:23:08 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/12 15:42:14 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/fractol.h"

int		main(int ac, char **av)
{
	t_window	window;

	if (ac == 2 && (ft_atoi(av[1]) == 3 || ft_atoi(av[1]) == 2
				|| ft_atoi(av[1]) == 1))
	{
		window.fractal.nb = ft_atoi(av[1]);
		window.settings.zoom = 100;
		window.settings.max_ite = 2;
		window.settings.mod_key = 1;
		window.settings.scroll.x = 0;
		window.settings.scroll.y = 0;
		open_window(&window);
		window_loop(&window);
	}
	else
	{
		printf("%s\n", av[0]);
		write(1, "1: julia\n2: mandelbrot\n3: square", 34);
	}
	return (0);
}
