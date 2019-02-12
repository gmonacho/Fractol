/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   window.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/06 19:02:51 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/12 14:26:12 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

int			window_loop(t_window *window)
{
	window->img.ptr = mlx_new_image(window->mlx_ptr, WX, WY);
	mlx_hook(window->win_ptr, 6, 0, mouse_move, window);
	mlx_hook(window->win_ptr, 4, 0, mouse_press, window);
	mlx_hook(window->win_ptr, 5, 0, mouse_release, window);
	mlx_hook(window->win_ptr, 2, 0, key_press, window);
	mlx_hook(window->win_ptr, 3, 0, key_release, window);
	refresh_window(window);
	mlx_loop(window->mlx_ptr);
	return (1);
}
