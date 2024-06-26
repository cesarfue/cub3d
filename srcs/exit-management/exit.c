/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpitot <mpitot@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:29:15 by mpitot            #+#    #+#             */
/*   Updated: 2024/06/10 17:10:59 by mpitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

static void	__print_err(int err)
{
	if (err == EXIT_MALLOC)
		ft_printf_fd(2, "%s: malloc error\n", ERRMSG);
	if (err == EXIT_OPEN)
		ft_printf_fd(2, "%s: error opening file\n", ERRMSG);
	if (err == EXIT_READ)
		ft_printf_fd(2, "%s: error reading file\n", ERRMSG);
	if (err == EXIT_MLX)
		ft_printf_fd(2, "%s: mlx error\n", ERRMSG);
}

void	exit_error(t_app *app, int error)
{
	__print_err(error);
	free_app(app);
	exit(error);
}

void	exit_parsing_error(t_app *app, const char *msg)
{
	if (msg == NULL)
		perror(ERRMSG);
	else
		ft_printf_fd(2, "%s: %s\n", ERRMSG, msg);
	free_parsing_exit(app);
	exit(EXIT_PARSING);
}
