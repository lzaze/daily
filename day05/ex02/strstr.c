#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	char	*test;
	int	j;

	i = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}

	test = malloc(sizeof(char) * i);

	j = 0;
	i = 0;
	while (str[j] != '\0')
	{
		while (str[j] == to_find[i])
		{
			test[i] = to_find[i];
			i++;
		}
		j++;
	}
	return test;
}

int	main()
{
	char str[] = "abc hello yes";
	char to_find[] = "yes";
	printf("%s\n", ft_strstr(str, to_find));
	return 0;
}
