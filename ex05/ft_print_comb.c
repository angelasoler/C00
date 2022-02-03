/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 01:22:55 by asoler            #+#    #+#             */
/*   Updated: 2022/02/03 19:54:08 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	put(char c)
{
	write(1, &c, 1)
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	tirth;
	char	separator[3];

	first = '0';
	separator[0] = ',';
	separator[1] = ' ';
	separator[2] = '\n';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			tirth = second + 1;
			while (tirth <= '9')
			{
				write(1, &first, 1);
				write(1, &second, 1);
				write(1, &tirth, 1);
				if (first != '7')
				{
					write(1, separator, 2);
				}
				else
				{
					write(1, &separator[2], 1);
				}
				tirth++;
			}
			second++;
		}
		first++;
	}
}
