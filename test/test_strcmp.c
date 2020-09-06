/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtriston <mtriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 15:19:37 by mtriston          #+#    #+#             */
/*   Updated: 2020/09/06 15:22:22 by mtriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_strcmp(void)
{
	printf("\\_______TESTING STRCMP_______/\n\n");
	printf("   strcmp |%d| \n", strcmp("Hello, World", "Hello, Worl"));
	printf("ft_strcmp |%d| \n\n", _ft_strcmp("Hello, World", "Hello, Worl"));
	printf("   strcmp |%d| \n", strcmp("Hello\0 Wow", "Hello"));
	printf("ft_strcmp |%d| \n\n", _ft_strcmp("Hello\0 Wow", "Hello"));
	printf("   strcmp |%d| \n", strcmp("123", "1234"));
	printf("ft_strcmp |%d| \n\n", _ft_strcmp("123", "1234"));
	printf("   strcmp |%d| \n", strcmp("", ""));
	printf("ft_strcmp |%d| \n\n", _ft_strcmp("", ""));
}
