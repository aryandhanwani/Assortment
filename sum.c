#include <stdio.h>

//sum of array by taking data from user

int main()
{
	int i,j;
	int size,row,col,sum1,sum2;
	
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
	
	printf("enter the row number ");
	scanf("%d", &row);
	
	if(row<0||row>=size)
	{
		printf("invalid number");
	}
	else if (row==0)
	{
		for(i=0;i<=row;i++)
		{
			for(j=0;j<size;j++)
			{
				sum1=sum1+a[i][j];
			}
		}	
	}
	else if (row==1)
	{
		for(i=1;i<=row;i++)
		{
			for(j=0;j<size;j++)
			{
				sum1=sum1+a[i][j];
			}
		}	
	}
	else 
	{
		for(i=2;i<=row;i++)
		{
			for(j=0;j<size;j++)
			{
				sum1=sum1+a[i][j];
			}
		}	
	}
	
	printf("the sum of row is %d\n",sum1);
		
	printf("enter the colum number ");
	scanf("%d", &col);
	
	if(col<0||col>=size)
	{
		printf("invalid number");
	}
	else if (col==0)
	{
		for(i=0;i<size;i++)
		{
			for(j=0;j<=col;j++)
			{
				sum2=sum2+a[i][j];
			}
		}	
	}
	else if (col==1)
	{
		for(i=0;i<size;i++)
		{
			for(j=1;j<=col;j++)
			{
				sum2=sum2+a[i][j];
			}
		}	
	}
	else 
	{
		for(i=0;i<size;i++)
		{
			for(j=2;j<=col;j++)
			{
				sum2=sum2+a[i][j];
			}
		}	
	}
	
	printf("the sum of colum is %d\n",sum2);
	
	return 0;
}

