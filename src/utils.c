/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:29:46 by ahadama-          #+#    #+#             */
/*   Updated: 2024/04/19 19:29:48 by ahadama-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void    free_map(t_game *data)
{
    int     i;

    i = 0;
    while (i < data->row)
        free(data->map[i++]);
    free(data->map);
    exit(1);
}