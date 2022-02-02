/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:47:24 by asoler            #+#    #+#             */
/*   Updated: 2022/02/02 20:07:46 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int index = 97;
	// 97 é a representação decimal do simbola a na tabela ascii
	while (index <= 122)
	{
		char letter = index;
		write(1, &letter, 1);
		index++;
	}
}