/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   key_release.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/01 16:41:24 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/01 18:15:54 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

int		key_release(int keycode, t_window *window)
{
	window->keyboard.tab[keycode] = 0;
	return (0);
}
