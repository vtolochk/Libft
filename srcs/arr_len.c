/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtolochk <vtolochk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 11:36:00 by vtolochk          #+#    #+#             */
/*   Updated: 2018/05/11 11:36:00 by vtolochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		array_len(char **array)
{
	int size;

	size = 0;
	if (!array || !array[size])
		return (size);
	while (array[size])
		size++;
	return (size);
}