#include<stdio.h>

//largest number in 2d array

int main()
{
	int i,j;
	int size;
	
	printf("enter the size of row and colum ");
	scanf("%d", &size);
	
	int a[size][size];
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
	
	int max=a[0][0];
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(a[i][j]>a[0][0])
			{
		
				max=a[i][j];
			}
			else
			{
				printf(" ");
			}
		}
	}
	
	printf("the largest number is %d\n " ,max);
	
	return 0;	
}
