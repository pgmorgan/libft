/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorgan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:28:32 by pmorgan-          #+#    #+#             */
/*   Updated: 2018/11/08 17:30:47 by pmorgan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dest, const void *src, int c, size_t n)
{
	void	*temp;
	int		i;
	
	if (!(temp = (void)malloc(n)))
		return (void);
	i = -1;
	while (++i < n)
		temp[i] = src[i];
	i = -1;
	while (++i < n)
		dest[i] = temp[i];
	return (NULL);
}
