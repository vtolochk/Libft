/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_append_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtolochk <vtolochk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 16:12:00 by vtolochk          #+#    #+#             */
/*   Updated: 2018/06/12 16:12:00 by vtolochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **array_append_str(char **arr, char *str)
{
	int i;
	int len;
	char **new_arr;

	i = 0;
	len = array_len(arr);
	if (!len || !str)
		return (NULL);
	new_arr = (char **)malloc(sizeof(char *) * (len + 2));
	while (arr[i])
	{
		new_arr[i] = arr[i];
		i++;
	}
	new_arr[i] = ft_strdup(str);
	new_arr[i + 1] = NULL;
	return (new_arr);
}
