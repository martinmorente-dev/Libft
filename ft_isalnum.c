/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:31:25 by mmorente          #+#    #+#             */
/*   Updated: 2024/09/28 11:35:49 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(unsigned int ch)
{
	if (ch >= 'a' && ch <= 'Z')
		return (1);
	else if (ch >= '0' && ch <= '9')
		return (1);
	else
		return (0);
}
