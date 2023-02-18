#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>

//3
int	*pattern(int *place4, int *tmp, int i, int j)
{
	int p[4][4];
	int	lin;
	int	a;
	int	b;
	int	c;

	a = i / 2 + 1;
	b = (i + 3) % 6 / 2 + 1;
	c = 6 - a - b;
	if (j == 0)
		p = {{0, a, b, c}, {a, 0, c, b}, {b, c, 0, a}, {c, b, a, 0}};
	if (j == 1)

	if (j == 2)

	if (j == 3)
	
	lin = 0;
	while (lin < 4)
	{
		tmp[lin * 4] = p[place4[lin]][0];
		tmp[lin * 4 + 1] = p[place4[lin]][1];
		tmp[lin * 4 + 2] = p[place4[lin]][2];
		tmp[lin * 4     + 3] = p[place4[lin]][3];
	}
	return (tmp);
}

//2
void convert(char *str, int *line)
{
	int	i;

	i = 0;
	while (i <= 30)
	{
		line[i / 2] = str[i] - '0';
		i = i + 2;
	}
}


int main(int argc, char** argv)
{
	int line[16];
	int	tmp[16];
	int place4[4,3,2,1];
	
	convert(argv[1], line);
	



	return 0;
}
