#include <unistd.h>
void ft_print(int i, int j, int k, int m)
{
	 write (1, &i, 1);
         write (1, &j, 1);
         write (1, " ", 1);
         write (1, &k, 1);
         write (1, &m, 1);
}

void	ft_print_comd2 (void)
{
	int i;
	int j;
	int k;
	int m;

	i = '0';
	j = '0';
	k = '0';
	m = '1';
	while (i <= '9')
	{
		write (1, &i, 1);
		while (j <= '8')
		{
			 write (1, &j, 1);
			while (k <= '9')
			{
				 write (1, &k, 1);
				 m = 1;
				while (m <= '9')
				{
					ft_print(i, j, k, m);
					m++;
				}
					k++;
			}
				j++;
		}
			i++;
	}
}




