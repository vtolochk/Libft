/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   increase_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtolochk <vtolochk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 17:10:00 by vtolochk          #+#    #+#             */
/*   Updated: 2018/06/13 17:10:00 by vtolochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **increase_array(char **arr, int increase_number)
{
	int i;
	char **new_arr;
	int current_len;
	int increased_len;

	i = 0;
	current_len = array_len(arr);
	if (current_len == 0)
		return (NULL);
	if (increase_number <= 0)
		return (arr);
	increased_len = current_len + increase_number + 1;
	new_arr = (char **)malloc(sizeof(char *) * increased_len);
	while (increased_len > 0)
		new_arr[--increased_len] = NULL;
	while (arr[i])
	{
		new_arr[i] = ft_strdup(arr[i]);
		i++;
	}
	return (new_arr);
}