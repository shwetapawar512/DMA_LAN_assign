//WAP to find multiplication of two matrix.

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int **m1,**m2,**r,i,j,r1,r2,c1,c2,k;

	printf("Enter row and columns for martrix1:\n");
	scanf("%d %d",&r1,&c1);
	printf("Enter row and columns for martrix2:\n");
	scanf("%d %d",&r2,&c2);

	m1=malloc(sizeof(int *)*r1);
	m2=malloc(sizeof(int *)*r2);
	r=malloc(sizeof(int *)*r1);
	
	
	if((r1!=c2) || (r2!=c1))
	{	printf("Multiplication not possible.\n");
		return;
	}	

	for(i=0;i<r1;i++)
	{
		m1[i]=malloc(sizeof(int *)*r1);
		m2[i]=malloc(sizeof(int *)*r2);
		r[i]=malloc(sizeof(int *)*c2);
	}

	/*for (i = 0; i < r1; i++) 
	{
        	m1[i] = malloc(sizeof(int) * c1);
        	r[i] = malloc(sizeof(int) * c2);
    	}
    	for (i = 0; i < r2; i++)
        m2[i] = malloc(sizeof(int) * c2);*/

	printf("Enter elements for matrix 1:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			scanf("%d",&m1[i][j]);
	}	
	
	printf("Enter elements for matrix 2:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
			scanf("%d",&m2[i][j]);
	}	

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			r[i][j]=0;
			for(k=0;k<r2;k++)
			r[i][j]+=(m1[i][k])*(m2[k][j]);
		}
	}	

	printf("Resultant matrix:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
			printf("%d ",r[i][j]);
		printf("\n");	
	}	
	
}	
