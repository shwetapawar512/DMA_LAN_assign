///WAP to find the trace of a matrix.///

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int **m,i,j,r,c;

	printf("Enter rows and columns for matrix:\n");
	scanf("%d %d",&r,&c);

	if(r!=c)
	{
		printf("Matrix is not a square matrix. The trace is not possible.\n");
		return;
	}

	m=malloc(sizeof(int *)*r);

	for(i=0;i<r;i++)
		m[i]=malloc(sizeof(int *)*c);

	printf("Enter matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&m[i][j]);
	}

	int s=0;
	printf("The diagnol elements of a matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				printf("%d ",m[i][j]);
				s+=m[i][j];
			}            
		}
	}
	printf("\nThe trace of a matrix is: %d\n",s);

	for(i=0;i<r;i++)
		free(m[i]);
	free(m);	

}
