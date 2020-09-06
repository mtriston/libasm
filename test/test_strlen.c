/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtriston <mtriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 15:20:00 by mtriston          #+#    #+#             */
/*   Updated: 2020/09/06 15:22:42 by mtriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_strlen(void)
{
	printf("\n\n\\_______TESTING STRLEN_______/\n\n");
	printf("   strlen |%5lu|\n", strlen("Hello, World"));
	printf("ft_strlen |%5lu|\n\n", _ft_strlen("Hello, World"));
	printf("   strlen |%5lu|\n", strlen(""));
	printf("ft_strlen |%5lu|\n\n", _ft_strlen(""));
	printf("   strlen |%5lu|\n", strlen("Hello,\n World"));
	printf("ft_strlen |%5lu|\n\n", _ft_strlen("Hello,\n World"));
	printf("   strlen |%5lu|\n", strlen("123456789"));
	printf("ft_strlen |%5lu|\n\n", _ft_strlen("123456789"));
	strlen(NULL);
	_ft_strlen(NULL);
}
