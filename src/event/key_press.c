/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   key_press.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 16:40:14 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/01 18:30:17 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

int		key_press(int keycode, t_window *window)
{
	window->keyboard.tab[keycode] = 1;
	refresh_window(window);
	return (0);
}
