/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 01:22:55 by asoler            #+#    #+#             */
/*   Updated: 2022/02/03 22:47:33 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put(char*c)
{
	char	separator[3];

	separator[0] = ',';
	separator[1] = ' ';
	separator[2] = '\n';
	if (c[0] < '7')
	{
		write(1, c, 3);
		write(1, separator, 2);
	}
	if (c[0] == '7')
	{
		write(1, c, 3);
		write(1, &separator[2], 1);
	}
}

void	ft_print_comb(void)
{
	char	digit[4];

	digit[0] = '0';
	digit[3] = '\n';
	while (digit[0] <= '7')
	{
		digit[1] = digit[0] + 1;
		while (digit[1] <= '8')
		{
			digit[2] = digit[1] + 1;
			while (digit[2] <= '9')
			{
				put(digit);
				digit[2]++;
			}
			digit[1]++;
		}
		digit[0]++;
	}
}
