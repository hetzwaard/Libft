/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isspace.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mahkilic <mahkilic@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/28 16:14:43 by mahkilic      #+#    #+#                 */
/*   Updated: 2024/12/28 16:14:51 by mahkilic      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}