/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:43:33 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/16 15:53:44 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2, int n)
{
	unsigned int i;

	i = 0;
	while (i < n && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return (-1);
		s1++;
		s2++;
		i++;
	}
	return (0);
}
