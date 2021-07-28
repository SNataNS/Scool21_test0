#include <unistd.h>
void ft_print (int i, int j, int k, int m)
{
	 write (1, &i, 1);
         write (1, &j, 1);
         write (1, " ", 1);
         write (1, &k, 1);
         write (1, &m, 1);
}

void ft_print_comb2 (void)
{
	int i;
	int j;
	int k;
	int m;

	i = 0;
	j = 0;
	k = 0;
	m = 1;
	while (i <= 9)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				while (m <= 9)
				{
					ft_print (i, j, k, m);
					m++;
				}
				if (m == 10)
					k++;
			}
			if (k == 10)
				j++;
		}
		if (j == 10)
			i++;
	}
}




