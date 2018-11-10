/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorgan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 18:27:19 by pmorgan-          #+#    #+#             */
/*   Updated: 2018/11/10 19:00:37 by pmorgan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	length_n;
	int	ind;
	
	i = 0;
	length_n = 0;
	ind = 0;
	if (!needle[ind])
		return (str);
	while (needle[length_n])
		length_n++;
	while (haystack[ind] && ind < len)
	{
		while (haystack[ind + i] == needle[i] && *needle && ind + i < len)
		{
			if ((length_n -1 == i)
				return (&str[ind]);
			++i;
		}
		i = 0;
		++ind;
	}
	return (NULL);
}
