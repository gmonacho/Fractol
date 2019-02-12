/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   key_info.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/12 13:19:56 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/12 14:26:15 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

void	key_info(t_window *window)
{
	window->inf_ptr = mlx_new_window(window->mlx_ptr, 400, 150, "Key Info");
	mlx_string_put(window->mlx_ptr, window->inf_ptr, 70, 0, 0xFFFFFF, "Key Info");
	mlx_string_put(window->mlx_ptr, window->inf_ptr, 0, 20, 0xFFFFFF, "Change Iteration : q <--> e");
	mlx_string_put(window->mlx_ptr, window->inf_ptr, 0, 40, 0xFFFFFF, "Modify Fractal : Mouse Drag");
	mlx_string_put(window->mlx_ptr, window->inf_ptr, 0, 60, 0xFFFFFF, "Un/Dis[able] Mouse : Space Bar");
}
