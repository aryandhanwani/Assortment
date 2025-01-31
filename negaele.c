#include<stdio.h>

//print all negative elements from 1D array

int main()
{
	int i,size;
	
	printf("enter the size of array ");
	scanf("%d", &size);
	
	int a[size];
	
	for(i=0;i<size;i++)
	{
		printf("a[%d] is ",i);
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(a[i]<0)
		{
			printf("%d", a[i]);	
		}
		else
		{
			printf("\n");
		}
	}
	return 0;
}
