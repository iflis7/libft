#include "../includes/libft.h"

char	*ft_get_next_line(int fd)
{
	char	*str;
	char	*buff;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * 5);
	buff = str;
	while (read(fd, buff, 1) > 0 && *buff++ != '\n')
		i++;
	if (buff > str)
	{
		buff = 0;
		return (str);
	}
	else
	{
		free(str);
		return (NULL);
	}
}
