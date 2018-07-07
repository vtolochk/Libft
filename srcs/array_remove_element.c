#include "libft.h"

char **array_remove_element(char **arr, int index)
{
	int i;
	int j;
	int new_len;
	char **new_arr;

	j = 0;
	i = 0;
	if (index < 0 || !(new_len = array_len(arr)) || index > (new_len + 1))
		return (arr);
	new_arr = (char **)malloc(sizeof(char *) * new_len);

	while (i < index)
	{
		new_arr[j] = ft_strdup(arr[i]);
		i++;
		j++;
	}
	++i;
	while (arr[i])
	{
		new_arr[j] = ft_strdup(arr[i]);
		j++;
		i++;
	}
	new_arr[j] = NULL;
	return (new_arr);
}