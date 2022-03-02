/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvishwac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:55:46 by cvishwac          #+#    #+#             */
/*   Updated: 2021/12/13 12:35:15 by cvishwac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	yeet;

	yeet = *a;
	*a = *b;
	*b = yeet;
}

/*int main ()
{
	int x = 6;
	int y = 5; 

	ft_swap(&x, &y);
	printf("%i%i\n", x, y);
	return(0);
}*/
