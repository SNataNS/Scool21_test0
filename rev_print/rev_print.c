#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
			i++;
		j = i-1;
		while(argv[1][j])
		{
			write(1, &argv[1][j], 1);
			j--;
		}
		write(1, "\n", 1);
	}
	else if (argc > 2)
		write(1, "\n", 1);
	return(0);
}



