#include<stdio.h>
int main()
{
	int mat1[100][100],mat2[100][100];
	int m, n, i, j;
	printf("Insert Roll :");
	scanf_s("%d", &m);
	printf("Insert Column :");
	scanf_s("%d", &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf_s("%d", &mat1[i][j]);
		}
	}
	printf("Matrix is :\n\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%5d ", mat1[i][j]);
		}
		printf("\n");
	}
	return 0;
}