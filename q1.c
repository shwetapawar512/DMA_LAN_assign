/*WAP to check given matrix is an identity matrix or not*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int **a;
	int r,c,j,i;

	printf("Enter no of rows and rows:\n");
	scanf("%d %d",&r,&c);

	if(r!=c)
	{
		printf("Not a Square matrix.");
		return;
	}

	a=malloc(sizeof(int *)*r);

	for(i=0;i<r;i++)
		a[i]=malloc(sizeof(int *)*r);

	printf("Enter Elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}

	printf("Matrix r*c\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}


	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if((i==j && a[i][j]!=1)||(i!=j && a[i][j]!=0))
				printf("Not a identity matrix.");
		}
	}

	printf("It is an identity matrix.");

	for(i=0;i<r;i++)
	{
		free(a[i]);
		a[i]=0;
	}

	free(a);
	a=0;
}

