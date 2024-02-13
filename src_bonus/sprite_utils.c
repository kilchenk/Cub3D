/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emirzaza <emirzaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:03:25 by kilchenk          #+#    #+#             */
/*   Updated: 2024/02/02 19:12:53 by emirzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d_bonus.h"

void	text_x_calc(t_game *game, t_raycast *rc, int stripe)

{
	rc->tex_x = (double)(256 * (stripe - (-rc->sprite_width / 2
					+ rc->sprite_screen_x)) * game->wall[6].width \
					/ rc->sprite_width) / 256;
}

void	sprite_dist_calc(t_game *game)
{
	int	i;

	i = -1;
	while (++i < game->sprite_index)
		game->sprite->dist[i] = ((game->player_pos_x - game->sprite->x[i])
				* (game->player_pos_x - game->sprite->x[i])
				+ (game->player_pos_y - game->sprite->y[i])
				* (game->player_pos_y - game->sprite->y[i]));
}
