/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumergu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:43:31 by mdumergu          #+#    #+#             */
/*   Updated: 2022/07/21 17:47:06 by mdumergu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	temp;

	a = 0;
	while (a < size)
	{
		size--;
		temp = tab[a];
		tab[a] = tab[size];
		tab[size] = temp;
		a++;
	}
}
