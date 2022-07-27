#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_wdmatch(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str2[j])
	{
		if (str1[i] == str2[j++])
			i++;
		if (!str1[i])
			ft_putstr(str1);
	}
}
int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_wdmatch(argv[1][0], argv[2][0]);
	ft_putstr("\n");
	return (0);
}