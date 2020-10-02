/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 15:38:45 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/18 16:23:56 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	if (nb == 3 || nb == 5 || nb == 7 || nb == 2)
		return (nb);
	while ((nb % 2 == 0 || nb % 3 == 0 || nb % 4 == 0 || nb % 5 == 0 ||
				nb % 6 == 0 || nb % 7 == 0 || nb % 8 == 0 ||
				nb % 9 == 0) && nb >= 10)
		nb++;
	return (nb);
}