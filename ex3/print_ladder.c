#include <unistd.h>

int		main(void)
{
	int	a;
	int	b;

	a = 5;
	while(a >= 1)
	{
		b = 1;
		while(b <= a)
		{
			write(1, ".", 1);
			b++;
		}
		write(1, "\n", 1);
		a--;
	}
	return (0);
}
