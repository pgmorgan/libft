/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorgan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 17:50:29 by pmorgan-          #+#    #+#             */
/*   Updated: 2018/11/10 17:52:29 by pmorgan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (s)
		s++;
	}
	return (NULL);
}
