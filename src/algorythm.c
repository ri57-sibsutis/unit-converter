#include "algorythm.h"
#include "input.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <float.h>

double convert(int st, int sp, double in, int n)
{
	double g[N][N];
	int w = input(g, n);
	return Dijcstra(g, st, sp, in, w);
}

double Dijcstra(double g[N][N], int st, int sp, double in, int n)
{
	bool visited[n];
	double D[n];
	int i, j;
	for(i = 0;i < n;i++)
	{
		if (g[st][i] == 0)
			D[i] = DBL_MAX;
		else
			D[i] = g[st][i];
		visited[i] = false;
	}
	D[st] = 0;
	int index = 0, u = 0;
	for (i = 0;i < n;i++)
	{
		double min = DBL_MAX;
		for (j=0;j<n;j++)
		{
			if (!visited[j] && D[j] < min && D[j] != 0)
			{
				min = D[j];
				index = j;
			}
		}
		u = index;
		visited[u] = true;
		for(j = 0;j < n;j++)
			if (!visited[j] && g[u][j] != 0 && D[u] != DBL_MAX && (D[u] + g[u][j] < D[j]))
			{
				if(u < j)
					D[j]=D[u] * g[u][j];
				else
					D[j] = D[u] / g[u][j];
			}
	}
	if (st < sp)
		in = in / D[sp];
	else
		if (st >  sp)
			in = in * D[sp];
		else
			printf("Error!\n");
	return in;
}
