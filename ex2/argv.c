#include <stdio.h>

int main(int argc, char **argv)
{
	int a;

	a = 1;
	while (argc > a)
	{
		printf("arguments: %s\n ", argv[a]);
		a++;
	}
	return (0);
}

