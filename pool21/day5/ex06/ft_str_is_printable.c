/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 17:10:15 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/15 18:28:52 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if ((*str >= 20) && (*str <= 126))
		{
			++str;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
