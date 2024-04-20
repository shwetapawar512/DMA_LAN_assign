/*WAP to transpose a matrix.
Ex: 
The transpose of a matrix is found by interchanging its rows into columns or columns into rows.*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int **m,**t,i,j,r,c;

	printf("Enter rows and columns for original matrix:\n");
	scanf("%d %d",&r,&c);
	
	m=malloc(sizeof(int *)*r);
	for(i=0;i<r;i++)
		m[i]=malloc(sizeof(int *)*c);
	
	printf("Enter matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&m[i][j]);
	}

	printf("Original matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",m[i][j]);	
			printf("\n");
	}

	t=malloc(sizeof(int *)*c);
	for(i=0;i<c;i++)
		t[i]=malloc(sizeof(int *)*c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[j][i]=m[i][j];
		}
	}	

	printf("Transpose of a matrix:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
			printf("%d ",t[i][j]);
		printf("\n");	
	}

	for(i=0;i<r;i++)
	{
		free(m[i]);free(t[i]);
	}

	free(m); free(t);

}
