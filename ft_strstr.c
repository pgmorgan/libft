/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorgan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 18:18:11 by pmorgan-          #+#    #+#             */
/*   Updated: 2018/11/10 18:26:53 by pmorgan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
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
	while (haystack[ind])
	{
		while (haystack[ind + i] == needle[i] && *needle)
		{
			if ((length_n -1 == i)
				return (&str[ind]);
			++i;
		}
		i = 0;
		++ind;
	}
	return (0);
}
