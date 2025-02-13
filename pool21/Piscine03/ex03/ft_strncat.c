/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 16:13:57 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/16 16:57:19 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src, int n)
{
	unsigned int i;

	i = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (i < n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	while (i < n)
	{
		*(dest) = '\0';
		i++;
	}
	return (dest);
}
