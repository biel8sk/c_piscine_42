unsigned int str_len(char *str)
{
	unsigned int len;

	len = 0;
	if (!*str)
		return (len);
	while (*str++)
		len++;
	return (len);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int dsize)
{
	unsigned int src_size;
	unsigned int i;

	src_size = str_len(src);
	i = 0;
	if (dsize > 0)
	{
		while(src[i] && i < (dsize -1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_size);
}
