/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrekov <tgrekov@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:43:01 by tgrekov           #+#    #+#             */
/*   Updated: 2023/11/04 22:47:09 by tgrekov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memset.c
 * @dontinclude ft_memset.c
 * @line /\* *********
 * @until /\* *********
 */

#include "libft.h"

/**
 * @brief Fills @p len bytes of byte string @p b with value @c
 * 
 * @param[in, out] b Pointer to start of byte string
 * @param[in] c Integer representation of value to write
 * (cast to unsigned char)
 * @param[in] len Number of bytes to write
 * @retval void* @p b
 */
void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
		((unsigned char *) b)[len] = c;
	return (b);
}
