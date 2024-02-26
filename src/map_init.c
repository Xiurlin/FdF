/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drestrep <drestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:25:33 by drestrep          #+#    #+#             */
/*   Updated: 2024/02/22 19:58:31 by drestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

void	free_array(char **ints)
{
	int	i;

	i = 0;
	while (ints && ints[i])
	{
		free(ints[i]);
		i++;
	}
}

t_map	map_init(t_map map)
{
	map.start_point.x = WIDTH * 0.25;
	map.start_point.y = HEIGHT * 0.25;
	map.end_point.x = WIDTH * 0.75;
	map.end_point.y = HEIGHT * 0.75;
	map.width = map.end_point.x - map.start_point.x;
	map.height = map.end_point.y - map.start_point.y;
	if (map.x_nbrs > map.y_nbrs)
		map.tile_size = map.width / map.x_nbrs;
	else
		map.tile_size = map.height / map.y_nbrs;
	if (map.x_nbrs != map.y_nbrs)
	{
		map.start_point.x = map.start_point.x
			+ map.width / 2 - map.x_nbrs / 2 * map.tile_size;
		map.start_point.y = map.start_point.y
			+ map.height / 2 - map.y_nbrs / 2 * map.tile_size;
	}
	return (map);
}

/* ft_printf("\nNumbers on the X axis: %d\nNumbers on the Y axis: %d\nMap width: %d\nTile size: %d\n",
	map.x_nbrs, map.y_nbrs, map.width, map.img.tile_size);
	exit(0);
	ft_printf("\n\nx0: %d\nxf: %d\ny0: %d\nyf: %d\n", map.img.points.x0, map.img.points.xf, map.img.points.y0, map.img.points.yf);
	exit(0); */