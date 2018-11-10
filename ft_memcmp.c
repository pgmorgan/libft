void	*ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;


	i = 0;
	while (i < n && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
