/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_v2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorgan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:13:40 by pmorgan-          #+#    #+#             */
/*   Updated: 2018/11/10 16:54:45 by pmorgan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dstlen;

	d = dst;
	s = src;
	n = size;
	while (n-- != 0 && *d != '\0')
		d++;
	dstlen = d - dst;
	n = size - dstlen;
	srclen = 0;
	if (n == 0)
		return (dstlen + strlen(src));
	while (*s)
	{
		if (n-- != 1)
			*d++ = *s;
		s++;
	}
	*d = '\0';
	return (dstlen + (s - src));
}
