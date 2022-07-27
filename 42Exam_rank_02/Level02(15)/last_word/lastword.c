#include <unistd.h>

void	last_word(char *str)
{
	int	j;
	int i;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] > ' ' && str[i + 1] < 127)
			j = i + 1;
		i++;
	}
	while (str[j] > ' ' && str[j] <= 127)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int main(int argc, char **argv)
{
    if (argc == 2)
        last_word(argv[1]);
    write(1, "\n", 1);
}