/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_math.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emirzaza <emirzaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 02:36:16 by kilchenk          #+#    #+#             */
/*   Updated: 2024/02/02 19:12:53 by emirzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	front_move(t_game *game)
{
	int	delta_x;
	int	delta_y;

	delta_x = (int)(game->player_pos_x
			+ game->raycast->dir_x * (MOVE_SPEED * 2));
	delta_y = (int)(game->player_pos_y
			+ game->raycast->dir_y * (MOVE_SPEED * 2));
	if (game->map[(int)game->player_pos_y][delta_x] != '1')
		game->player_pos_x += game->raycast->dir_x * MOVE_SPEED;
	if (game->map[delta_y][(int)game->player_pos_x] != '1')
		game->player_pos_y += game->raycast->dir_y * MOVE_SPEED;
}

void	back_move(t_game *game)
{
	int	delta_x;
	int	delta_y;

	delta_x = (int)(game->player_pos_x
			- game->raycast->dir_x * (MOVE_SPEED * 2));
	delta_y = (int)(game->player_pos_y
			- game->raycast->dir_y * (MOVE_SPEED * 2));
	if (game->map[(int)game->player_pos_y][delta_x] != '1')
		game->player_pos_x -= game->raycast->dir_x * MOVE_SPEED;
	if (game->map[delta_y][(int)game->player_pos_x] != '1')
		game->player_pos_y -= game->raycast->dir_y * MOVE_SPEED;
}

void	left_move(t_game *game)
{
	int	delta_x;
	int	delta_y;

	delta_x = (int)(game->player_pos_x
			- game->raycast->dir_y * (MOVE_SPEED * 2));
	delta_y = (int)(game->player_pos_y
			+ game->raycast->dir_x * (MOVE_SPEED * 2));
	if (game->map[(int)game->player_pos_y][delta_x] != '1')
		game->player_pos_x -= game->raycast->dir_y * MOVE_SPEED;
	if (game->map[delta_y][(int)game->player_pos_x] != '1')
		game->player_pos_y += game->raycast->dir_x * MOVE_SPEED;
}

void	right_move(t_game *game)
{
	int	delta_x;
	int	delta_y;

	delta_x = (int)(game->player_pos_x
			+ game->raycast->dir_y * (MOVE_SPEED * 2));
	delta_y = (int)(game->player_pos_y
			- game->raycast->dir_x * (MOVE_SPEED * 2));
	if (game->map[(int)game->player_pos_y][delta_x] != '1')
		game->player_pos_x += game->raycast->dir_y * MOVE_SPEED;
	if (game->map[delta_y][(int)game->player_pos_x] != '1')
		game->player_pos_y -= game->raycast->dir_x * MOVE_SPEED;
}
