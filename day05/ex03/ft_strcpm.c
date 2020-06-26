#include<stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == '\0' && s2[i] != '\0')
		{
			return (-1);
		}

		else if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}

		else if (s1[i] != '\0' && s2[i] == '\0')
		{
			return (1);
		}
		i++;
	}
}

int	main()
{
	char s1[] = "h";
	char s2[] = "grace";
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
