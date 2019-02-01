/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   close_window.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/09 16:01:05 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/01 18:13:04 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

int		close_window(t_window *window)
{
	if (window->mlx_ptr && window->win_ptr)
	{
		mlx_clear_window(window->mlx_ptr, window->win_ptr);
		mlx_destroy_window(window->mlx_ptr, window->win_ptr);
		return (1);
	}
	else
		return (0);
}
