#include <libft.h>

int		ft_strindexof(const char *s, const char c)
{
	int i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			if (s[i] == c)
				return (i);
			i++;
		}
		if (s[i] == c)
			return (i);
	}
	return (-1);
}
