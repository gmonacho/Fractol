/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   key_event.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 18:18:14 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/11 15:23:07 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

void	key_event(t_window *window)
{
	if (window->keyboard.tab[53])
	{
		close_window(window);
		exit(0);
	}
	if (window->keyboard.tab[83])
		window->fractal.nb = 1;
	else if (window->keyboard.tab[84])
		window->fractal.nb = 2;
	else if (window->keyboard.tab[85])
		window->fractal.nb = 3;
	else if (window->keyboard.tab[12])
		window->settings.max_ite -= 1;
	else if (window->keyboard.tab[14])
		window->settings.max_ite += 1;
}
