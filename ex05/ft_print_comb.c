/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 01:22:55 by asoler            #+#    #+#             */
/*   Updated: 2022/02/03 18:38:58 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	tirth;
	char	separator[3];

	first = '0';
	separator[0]= ',';
	separator[1]= ' ';
	separator[2]= 10;

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
				if ((first + second + tirth) < 168)
				{
					write(1, separator, 2);
				}
				if ((first + second + tirth) == 168)
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