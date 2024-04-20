//WAP to declare an array of string pointers. and sort them in ascending order according to length//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char **a,*t;
	int i,n,j;
	
	printf("Enter no. of strings:\n");
	scanf("%d",&n);
	a=malloc(sizeof(char *)*n);

	for(i=0;i<n;i++)
		a[i]=malloc(sizeof(char *));
	
	printf("Enter strings:\n");
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	printf("-------------------------------------------------------------\n");	
	printf("Strings Before:\n");
	for(i=0;i<n;i++)
		printf("%s\n",a[i]);

//////logic to sort strings in alphabetical order///////	

/*	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	printf("-----------------------------------------------------------\n");
	printf("Strings sorted according to alphabetical order:\n");
	for(i=0;i<n;i++)
		printf("%s\n",a[i]);
*/
////////logic to sort strings lengthwise/////////////////

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(strlen(a[j])>strlen(a[j+1]))
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}	
	
	printf("-------------------------------------------------------------\n");
	printf("Strings sorted according to length:\n");
	for(i=0;i<n;i++)
		printf("%s\n",a[i]);

	//loop to free memory///
	for(i=0;i<n;i++)
		free(a[i]);
	free(a);	
}		













