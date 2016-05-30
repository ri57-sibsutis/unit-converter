#include "Input.h"
#include <stdio.h>

int input (double g[N][N], int n)
{
	FILE *file;
	int i, j, w;
	if (n==1)
	{
		file = fopen ("files/length.txt", "r");
	}
	if (n==2)
	{
		file = fopen ("files/weight.txt", "r");
	}
	if (n==3)
	{
		file = fopen ("files/information.txt", "r");
	}
	if (n==4)
	{
		file = fopen ("files/time.txt", "r");
	}
	if (n==5)
	{
		file = fopen ("files/temperature.txt", "r");
	}
	if (n==6)
	{
		file = fopen ("files/speed.txt", "r");
	}
	fscanf (file, "%d", &w);
	for (i=0; i<w; i++)
	{
		for (j=0; j<w; j++)
			fscanf (file, "%lf", &g[i][j]);
	}
	int fclose(FILE *file);
	return w;
}