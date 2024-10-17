/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahkilic <mahkilic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:14:20 by mahkilic          #+#    #+#             */
/*   Updated: 2024/10/17 18:14:20 by mahkilic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (0);
}

// int main(void)
// {
//     char *str = "I LovCe CodCam!";
//     char wanted_man = 'C';
//     char *result;
//     result = ft_strrchr(str, wanted_man);
//     if (result != NULL)
//         printf("'%c' %s\n", wanted_man, result);
//     else
//         printf("'%c' \n", wanted_man);
//     return 0;
// }