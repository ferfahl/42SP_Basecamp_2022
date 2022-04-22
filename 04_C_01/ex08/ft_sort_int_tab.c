/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves < feralves@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 03:15:54 by feralves          #+#    #+#             */
/*   Updated: 2022/04/18 03:53:52 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	checkloop;
	int	firstloop;
	int	temp;

	checkloop = 0;
	while (checkloop < size)
	{
		firstloop = 0;
		while (firstloop < size - checkloop - 1)
		{
			if (tab[firstloop] > tab[firstloop + 1])
			{
				temp = tab[firstloop];
				tab[firstloop] = tab[firstloop + 1];
				tab[firstloop + 1] = temp;
			}
			firstloop++;
		}
		checkloop++;
	}
}
