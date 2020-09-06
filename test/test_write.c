/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtriston <mtriston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 15:20:04 by mtriston          #+#    #+#             */
/*   Updated: 2020/09/06 15:29:55 by mtriston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	lauch_test(int fd, char *msg, int count)
{
	errno = 0;
	printf("return %zd\n", write(fd, msg, count));
	perror("   write errno");
	errno = 0;
	printf("return %zd\n", _ft_write(fd, msg, count));
	perror("ft_write errno");
}

void		test_write(void)
{
	printf("\\_______TESTING WRITE_______/\n\n");
	lauch_test(1, "Hello, World\n", 13);
	printf("\n***Testing invalid file descriptor***\n\n");
	lauch_test(11, "Hello, World\n", 13);
	printf("\n***Testing invalid buf pointer***\n\n");
	lauch_test(1, NULL, 13);
}