/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves < feralves@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:28:41 by feralves          #+#    #+#             */
/*   Updated: 2022/04/18 03:03:45 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	count = 0;
	while (count < (size / 2))
	{
		temp = tab[count];
		tab [count] = tab [size - 1 - count];
		tab [size - 1 - count] = temp;
		count++;
	}	
}
