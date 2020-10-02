/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 09:38:18 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/17 16:25:32 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
