/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 17:52:58 by tmatis            #+#    #+#             */
/*   Updated: 2020/11/25 17:57:09 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_test.h"

int		main(void)
{
	ft_putstr_fd("---   [BEGIN TEST BUFFER]   ---\n\n", 1);
	ft_test_buffer();
	ft_putstr_fd("---   [BEGIN TEST SYNTAX]   ---\n\n", 1);
	ft_test_syntax();
}
