/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 18:42:40 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/15 18:45:09 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcade(char *str)
{
	while (*str)
	{
		if ((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		++str;
	}
	return (str);
}
