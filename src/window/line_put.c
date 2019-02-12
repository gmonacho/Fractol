/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   line_put.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/21 18:05:06 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/12 14:27:22 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../../include/fractol.h"

static void		get_vec(double *dx, double *dy, int *nb_point)
{
	if (ft_abs(*dx) > ft_abs(*dy))
	{
		*nb_point = ft_abs(*dx);
		*dy /= ft_abs(*dx);
		*dx /= ft_abs(*dx);
	}
	else
	{
		*nb_point = ft_abs(*dy);
		*dx /= ft_abs(*dy);
		*dy /= ft_abs(*dy);
	}
}

void			line_put(t_point p1, t_point p2, t_window *window)
{
	int			i;
	int			nb_point;
	double		dx;
	double		dy;

	dx = p2.x - p1.x;
	dy = p2.y - p1.y;
	get_vec(&dx, &dy, &nb_point);
	i = -1;
	while (i++ < nb_point)
	{
		if ((p1.y + dy * i) < WY && (p1.y + dy * i) >= 0 &&
				(p1.x + dx * i) < WX && (p1.x + dx * i) >= 0)
			window->img.tab[(int)((int)(p1.y + dy * i) *
					WY + (int)(p1.x + dx * i))] = 0xFFFFFF;
	}
}
