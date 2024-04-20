/*WAP to check two matrix are identical matrix or not*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int **m1,**m2;
	int r1,r2,c1,c2,j,i;

	printf("Enter rows and columns for matrix 1:\n");
	scanf("%d %d",&r1,&c1);

	printf("Enter rows and columns for matrix 2:\n");
	scanf("%d %d",&r2,&c2);

	if(r1!=r2 && c1!=c2)
	{
		printf("Matrices are not identical.\n");
		return;
	}

	m1=malloc(sizeof(int *)*r1);
	m2=malloc(sizeof(int *)*r2);

	for(i=0;i<r1;i++)
	{m1[i]=malloc(sizeof(int *)*c1);
		m2[i]=malloc(sizeof(int *)*c2);}

	printf("Enter Elements for matrix1:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			scanf("%d",&m1[i][j]);
	}

	printf("Enter Elements for matrix2:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
			scanf("%d",&m2[i][j]);
	}

	printf("Matrix1:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			printf("%d ",m1[i][j]);
		printf("\n");
	}

	printf("Matrix2:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
			printf("%d ",m2[i][j]);
		printf("\n");
	}

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			if(m1[i][j]!=m2[i][j])
				printf("Matrices m1 and m2 are not identical.\n");
			goto free_memory;
		}
	}

	printf("Matrices are identical.\n");

free_memory:
	for(i=0;i<r1;i++)
	{
		free(m1[i]); free(m2[i]);
		m1[i]=0; m2[i]=0;
	}

	free(m1);free(m2);
	m1=0;m2=0;
}
