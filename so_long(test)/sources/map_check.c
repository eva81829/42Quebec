/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwu <fwu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:46:34 by fwu               #+#    #+#             */
/*   Updated: 2024/05/30 16:40:46 by fwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int map_check(char **map_path)
{
	int fd;

	fd = open(map_path, O_RDONLY);
	if (fd < 0)
	{
		
	}
	
}