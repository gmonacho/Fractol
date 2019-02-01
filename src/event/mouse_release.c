/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   mouse_release.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 16:42:41 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/01 18:16:27 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

int			mouse_release(int button, int x, int y, t_window *window)
{
	x = 0;
	y = 0;
	window->mouse.button[button - 1] = 0;
	return (0);
}
