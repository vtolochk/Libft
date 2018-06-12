/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_append_array.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtolochk <vtolochk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 16:28:00 by vtolochk          #+#    #+#             */
/*   Updated: 2018/06/12 16:28:00 by vtolochk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **array_append_array(char **arr, char **append_arr)
{
	int i;
	int j;
	int arr_len;
	int append_arr_len;
	char **new_arr;

	j = 0;
	i = 0;
	arr_len = array_len(arr);
	append_arr_len = array_len(append_arr);
	if (!arr_len || !append_arr_len)
		return  (NULL);
	new_arr = (char **)malloc(sizeof(char *) * (arr_len + append_arr_len + 1));
	while (arr[i])
		new_arr[j++] = arr[i++];
	i = 0;
	while (append_arr[i])
		new_arr[j++] = append_arr[i++];
	new_arr[j] = NULL;
	return (new_arr);
}