/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fdf.h                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/06 19:18:33 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/01 22:33:35 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# define WX 1024.0
# define WY 1024.0

# include "../libft/includes/libft.h"
# include "../minilibx_macos/mlx.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <math.h>

typedef struct		s_vec2d
{
	int				x;
	int				y;
}					t_vec2d;

typedef struct		s_size
{
	int				i;
	int				j;
	int				height_ratio;
}					m_size;

typedef struct		s_point
{
	int					x;
	int					y;
}					t_point;

typedef struct		s_cursor
{
	int				x;
	int				y;
}					t_cursor;

typedef struct		s_keyboard
{
	int				tab[280];
}					t_keyboard;

typedef struct		s_mouse
{
	int				button[8];
	int				x;
	int				y;
	t_point			drag;
}					t_mouse;


typedef struct		s_img
{
	void			*ptr;
	int				*tab;
	int				bpp;
	int				s_l;
	int				endian;
}					t_img;

typedef struct		s_settings
{
	int				zoom_x;
	int				zoom_y;
	int				max_ite;
}					t_settings;

typedef struct		s_fractal
{
	double			c_r;
	double			c_i;
	double			z_r;
	double			z_i;
	int				nb;
}					t_fractal;

typedef struct		s_window
{
	void			*mlx_ptr;
	void			*win_ptr;
	t_mouse			mouse;
	t_keyboard		keyboard;
	t_img			img;
	t_settings		settings;
	t_fractal		fractal;
	t_fractal		mod_fract;
}					t_window;

int			is_in_screen(t_point p);
t_point		create_point(double x, double y);

int			key_release(int keycode, t_window *window);
int			key_press(int keycode, t_window *window);
void		key_event(t_window *window);
int			mouse_release(int button, int x, int y, t_window *window);
int			mouse_move(int x, int y, t_window *window);
int			mouse_press(int button, int x, int y, t_window *window);
void		mouse_event(t_window *window);

void		open_window(t_window *window);
void		refresh_window(t_window *window);
int			window_loop(t_window *window);
int			close_window(t_window *window);

void		mandelbrot(t_window *window);
void		set_mandelbrot(double x, double y, t_window *window);
void		put_fractal(t_window *window);
void		set_julia(double x, double y, t_window *window);

t_point		mouse_drag(int new_x, int new_y);

#endif
