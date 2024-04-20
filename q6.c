//WAP to find the normal of a matrix: the square root of the sum all elements.//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int **m,r,c,i,j;

	printf("Enter rows and columns for matrix:\n");	
	scanf("%d %d",&r,&c);

	m=malloc(sizeof(int *)*r);

	for(i=0;i<r;i++)
		m[i]=malloc(sizeof(int *)*c);

	printf("Enter the elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&m[i][j]);
	}

	printf("Matrix elements are:\n");
	//double root=0;
	int s=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
			printf("%d ",m[i][j]);
			s+=m[i][j];
		}	
	}
	
	printf("\nThe normal of a matrix: %f \n",sqrt(s));
	
	for(i=0;i<r;i++)
		free(m[i]);
	free(m);	
	
/*	float sqrt,temp=0;
	sqrt=s/2;
	while(sqrt!=temp)
	{
		temp=sqrt;
		sqrt=(s/temp+temp)*2;
	}
	
	printf("\nThe normal of a matrix: %lf\n",sqrt);*/
	
	
}

