/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorgan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:53:53 by pmorgan-          #+#    #+#             */
/*   Updated: 2018/11/10 16:13:31 by pmorgan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	orig_dest_len;
	unsigned int	dest_i;
	unsigned int	src_i;
	unsigned int	inverse_size_ctr;

	dest_i = 0;
	src_i = 0;
	inverse_size_ctr = size;
	orig_dest_len = ft_strlen(dest);
	while (dest[dest_i++])
		inverse_size_ctr--;
	dest_i--;
	while (src[src_i] && inverse_size_ctr > 1)
	{
		dest[dest_i] = src[src_i];
		dest_i++;
		src_i++;
		inverse_size_ctr--;
	}
	dest[dest_i] = '\0';
	if (size < ft_strlen(dest))
		return (size + ft_strlen(src));
	return (orig_dest_len + ft_strlen(src));
}

int	main(void)
{
	return (0);
}
