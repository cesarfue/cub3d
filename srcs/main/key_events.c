/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_events.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <mpitot@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:08:19 by cefuente          #+#    #+#             */
/*   Updated: 2024/05/30 15:33:00 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3D.h"

int		new_image(t_app *app)
{
	mlx_destroy_image(app->img->mlx, app->img->img);
	app->img->img = NULL;
	app->img->addr = NULL;
	app->img->bits_per_pixel = 0;
	app->img->line_length = 0;
	app->img->endian = 0;
	app->img->img = mlx_new_image(app->img->mlx,
			SCREEN_WIDTH, SCREEN_HEIGHT);
	if (!app->img->img)
		exit_error(app, EXIT_MLX);
	app->img->addr = mlx_get_data_addr(app->img->img, &app->img->bits_per_pixel,
			&app->img->line_length, &app->img->endian);
	if (!app->img->addr)
		exit_error(app, EXIT_MLX);
	return (0);	
}

int	change_motion_keypress(int key, t_app *app)
{
	if (key == XK_Escape)
		exit_error(app, EXIT_SUCCESS);
	if (app->pos->motion_up == false && key == XK_w)
		app->pos->motion_up = true;
	if (app->pos->motion_down == false && key == XK_s)
		app->pos->motion_down = true;
	if (app->pos->motion_left == false && key == XK_a)
		app->pos->motion_left = true;
	if (app->pos->motion_right == false && key == XK_d)
		app->pos->motion_right = true;
	if (app->pos->rotate_left == false && key == XK_Left)
		app->pos->rotate_left = true;
	if (app->pos->rotate_right == false && key == XK_Right)
		app->pos->rotate_right = true;
	return (0);
}

int	change_motion_keyrelease(int key, t_app *app)
{
	if (key == XK_w && app->pos->motion_up == true)
		app->pos->motion_up = false;
	if (key == XK_s && app->pos->motion_down == true)
		app->pos->motion_down = false;
	if (key == XK_a && app->pos->motion_left == true)
		app->pos->motion_left = false;
	if (key == XK_d && app->pos->motion_right == true)
		app->pos->motion_right = false;
	if (key == XK_Left && app->pos->rotate_left == true)
		app->pos->rotate_left = false;
	if (key == XK_Right && app->pos->rotate_right == true)
		app->pos->rotate_right = false;
	return (0);	
}