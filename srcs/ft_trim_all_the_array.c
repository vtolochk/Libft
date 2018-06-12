/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim_all_the_array.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtolochk <vtolochk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 15:27:00 by vtolochk          #+#    #+#             */
/*   Updated: 2018/06/12 15:27:00 by vtolochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **trim_all_the_array(char **array)
{
	int i;
	int arr_len;
	char **new_arr;

	i = 0;
	arr_len = array_len(array);
	if (!arr_len)
		return (NULL);
	new_arr = (char **)malloc(sizeof(char *) * (arr_len + 1));
	while (array[i])
	{
		new_arr[i] = ft_strtrim(array[i]);
		i++;
	}
	new_arr[i] = NULL;
	return (new_arr);
}