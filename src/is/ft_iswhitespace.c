/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 08:23:21 by hsaadi            #+#    #+#             */
/*   Updated: 2022/12/21 12:48:11 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_iswhitespace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' \
                || c == '\f' || c == '\r' || c == ' ');
}
